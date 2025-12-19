#include "IntArray.h"

IntArray::IntArray() : data_(nullptr), size_(0) {}

IntArray::IntArray(int n) : data_(nullptr), size_(n) {
    if (size_ > 0) data_ = new int[size_];
}

IntArray::IntArray(const IntArray& o) : data_(nullptr), size_(o.size_) {
    if (size_ > 0) {
        data_ = new int[size_];
        for (int i = 0; i < size_; ++i) data_[i] = o.data_[i];
    }
}

IntArray& IntArray::operator=(const IntArray& o) {
    if (this == &o) return *this;

    delete[] data_;
    data_ = nullptr;
    size_ = o.size_;

    if (size_ > 0) {
        data_ = new int[size_];
        for (int i = 0; i < size_; ++i) data_[i] = o.data_[i];
    }
    return *this;
}

IntArray::~IntArray() {
    delete[] data_;
}

int& IntArray::operator[](int i) {
    return data_[i];
}

Iterator IntArray::begin() {
    return Iterator(data_);
}

Iterator IntArray::end() {
    return Iterator(data_ + size_);
}
