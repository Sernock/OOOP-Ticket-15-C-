#include "Matrix.h"

Matrix::Matrix(int r, int c)
    : rows_(r), cols_(c), data_(r * c) {}

int Matrix::index(int r, int c) const {
    return r * cols_ + c;
}

int Matrix::rows() const { return rows_; }
int Matrix::cols() const { return cols_; }

int& Matrix::at(int r, int c) {
    return data_[index(r, c)];
}

Iterator Matrix::begin() { return data_.begin(); }
Iterator Matrix::end() { return data_.end(); }

bool Matrix::operator==(Matrix& o) {
    if (rows_ != o.rows_ || cols_ != o.cols_) return false;

    auto a = begin();
    auto b = o.begin();
    for (; a != end(); ++a, ++b)
        if (*a != *b) return false;
    return true;
}

Matrix Matrix::operator+(Matrix& o) {
    Matrix r(rows_, cols_);
    auto ri = r.begin();
    auto a = begin();
    auto b = o.begin();
    for (; ri != r.end(); ++ri, ++a, ++b)
        *ri = *a + *b;
    return r;
}

Matrix Matrix::operator*(int k) {
    Matrix r(rows_, cols_);
    auto ri = r.begin();
    auto a = begin();
    for (; ri != r.end(); ++ri, ++a)
        *ri = (*a) * k;
    return r;
}
