#include <iostream>
#include <memory>
#include <utility>

struct Tracer {
    int id;
    Tracer(int i) : id(i)  { std::cout << "Tracer(" << id << ") constructed\n"; }
    ~Tracer()              { std::cout << "Tracer(" << id << ") destroyed\n";   }
    void ping() const      { std::cout << "ping #" << id << "\n"; }
};

void use_raw(const Tracer* t) {                    // borrows, does not delete
    if (t) std::cout << "use_raw: id=" << t->id << "\n";
}

void take_ownership(Tracer* t) {                   // caller must own/delete
    std::cout << "take_ownership: deleting raw\n";
    delete t;
}

int main() {
    std::cout << "-- create --\n";
    auto p = std::make_unique<Tracer>(1);          // Create: std::unique_ptr<Tracer> p
    p->ping();                                     // Access: operator-> / *

    std::cout << "-- move ownership --\n";
    auto q = std::move(p);                         // Move (p becomes null)
    std::cout << "p is " << (p ? "not null" : "null") << "\n";
    q->ping();

    std::cout << "-- get(): borrow raw pointer --\n";
    use_raw(q.get());                              // borrow; DO NOT delete

    std::cout << "-- reset(new): delete old, take new --\n";
    q.reset(new Tracer(2));                        // Manage: reset(new T{})
    q->ping();

    std::cout << "-- swap() --\n";
    auto r = std::make_unique<Tracer>(3);
    std::cout << "before swap: q=" << q.get() << ", r=" << r.get() << "\n";
    q.swap(r);                                     // Manage: swap
    std::cout << "after  swap: q=" << q.get() << ", r=" << r.get() << "\n";

    std::cout << "-- release(): give up ownership --\n";
    Tracer* raw = r.release();                     // Escape hatch: r becomes null
    std::cout << "r is " << (r ? "not null" : "null") << "\n";
    use_raw(raw);                                  // now caller owns it
    take_ownership(raw);                           // must delete manually

    std::cout << "-- reset(): delete managed object --\n";
    q.reset();                                     // delete and become empty

    std::cout << "-- arrays --\n";
    auto a = std::make_unique<int[]>(3);           // Array form
    a[0] = 10; a[1] = 20; a[2] = 30;
    std::cout << "sum=" << a[0] + a[1] + a[2] << "\n";

    std::cout << "end of main\n";                  // remaining unique_ptrs auto-destroy
}
