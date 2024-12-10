#ifndef HEAP_H
#define HEAP_H

#include <vector>
#include <iostream>

class Heap {
private:
    std::vector<int> data;

    void heapifyUp(int index);
    void heapifyDown(int index);

public:
    void insert(int value);
    void remove(int value);
    bool search(int value) const;
    void display() const;
    const std::vector<int>& getData() const;
};

#endif
