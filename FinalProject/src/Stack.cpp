#include "Stack.h"

void Stack::push(int value) {
    data.push_back(value);
}

void Stack::pop() {
    if (!data.empty()) {
        data.pop_back();
    } else {
        std::cout << "Stack is empty, nothing to pop!\n";
    }
}

int Stack::peek() const {
    if (!data.empty()) {
        return data.back();
    } else {
        throw std::runtime_error("Stack is empty, no top element!");
    }
}

bool Stack::isEmpty() const {
    return data.empty();
}

void Stack::display() const {
    if (data.empty()) {
        std::cout << "Stack is empty!\n";
        return;
    }
    for (int i = data.size() - 1; i >= 0; --i) {
        std::cout << data[i] << " ";
    }
    std::cout << "\n";
}

const std::vector<int>& Stack::getData() const {
    return data;
}
