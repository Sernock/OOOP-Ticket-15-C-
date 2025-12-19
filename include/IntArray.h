#pragma once
#include "Iterator.h"

class IntArray {
    int* data_;
    int size_;

public:
    IntArray();
    explicit IntArray(int n);

    IntArray(const IntArray& other);
    IntArray& operator=(const IntArray& other);

    ~IntArray();

    int& operator[](int i);

    Iterator begin();
    Iterator end();
};
