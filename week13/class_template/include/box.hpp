// box.hpp
#pragma once
#include <iostream>

template <typename T>
class Box {
public:
    Box(T value);        
    T get() const;      
    void set(T value);   

    void print() const;

private:
    T value_;
};


template <typename T>
Box<T>::Box(T value) : value_{value} {}

template <typename T>
T Box<T>::get() const {
    return value_;
}

template <typename T>
void Box<T>::set(T value) {
    value_ = value;
}

template <typename T>
void Box<T>::print() const {
    std::cout << "Box<" << typeid(T).name()
              << "> holds: " << value_ << '\n';
}
