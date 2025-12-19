#pragma once
#include "IntArray.h"

class Matrix {
    int rows_;
    int cols_;
    IntArray data_;

    int index(int r, int c) const;

public:
    Matrix(int r, int c);

    int rows() const;
    int cols() const;

    int& at(int r, int c);

    Iterator begin();
    Iterator end();

    bool operator==(Matrix& other);
    Matrix operator+(Matrix& other);
    Matrix operator*(int k);
};
