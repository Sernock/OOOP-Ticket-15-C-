#include "Iterator.h"

Iterator::Iterator(int* p) : ptr_(p) {}

int& Iterator::operator*() {
    return *ptr_;
}

Iterator& Iterator::operator++() {
    ++ptr_;
    return *this;
}

bool Iterator::operator!=(const Iterator& other) const {
    return ptr_ != other.ptr_;
}
