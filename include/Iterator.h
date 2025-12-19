#pragma once

class Iterator {
    int* ptr_;
public:
    Iterator(int* p);
    int& operator*();
    Iterator& operator++();
    bool operator!=(const Iterator& other) const;
};
