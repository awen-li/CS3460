#include <iostream>
#include <memory>
#include <utility>

struct Tracer {
    int id;
    Tracer(int i) : id(i) { std::cout << "Tracer(" << id << ") constructed\n"; }
    ~Tracer()              { std::cout << "Tracer(" << id << ") destroyed\n"; }
    void ping() const      { std::cout << "ping #" << id << "\n"; }
};

void borrow(const Tracer* t) {                 // borrows; never deletes
    if (t) std::cout << "borrow -> "; 
    if (t) t->ping();
}

int main() {
    std::cout << "-- create --\n";
    std::shared_ptr<Tracer> sp = std::make_shared<Tracer>(1);
    std::cout << "use_count=" << sp.use_count()
              << ", unique=" << std::boolalpha << sp.unique() << "\n";

    std::cout << "-- access --\n";
    sp->ping();                 // operator->
    (*sp).ping();               // operator*

    std::cout << "-- get() (borrow raw) --\n";
    Tracer* raw = sp.get();     // borrow; DO NOT delete
    borrow(raw);

    std::cout << "-- copy: share ownership --\n";
    std::shared_ptr<Tracer> sp2 = sp;     // ref count +1
    std::cout << "sp.use_count=" << sp.use_count()
              << ", sp2.use_count=" << sp2.use_count()
              << ", unique=" << sp.unique() << "\n";

    std::cout << "-- move handle --\n";
    std::shared_ptr<Tracer> sp3 = std::move(sp2);  // sp2 becomes null
    std::cout << "sp2 " << (sp2 ? "not null" : "null")
              << ", counts (sp=" << sp.use_count()
              << ", sp3=" << sp3.use_count() << ")\n";

    std::cout << "-- swap --\n";
    sp.swap(sp3);
    std::cout << "after swap: counts (sp=" << sp.use_count()
              << ", sp3=" << sp3.use_count() << ")\n";

    std::cout << "-- reset(new T{}) on sp3 --\n";
    sp3.reset(new Tracer(2));   // drops one owner of Tracer(1), now owns Tracer(2)
    std::cout << "sp.use_count="  << sp.use_count()  << " (owns Tracer 1)\n";
    std::cout << "sp3.use_count=" << sp3.use_count() << " (owns Tracer 2)\n";

    std::cout << "-- reset() --\n";
    sp3.reset();                // destroys Tracer(2)
    std::cout << "sp3 " << (sp3 ? "not null" : "null") << "\n";

    std::cout << "-- final reset(): destroy last owner --\n";
    sp.reset();                 // destroys Tracer(1) when count hits 0

    std::cout << "end\n";
}
