#include "Queue.h"

void Queue::enqueue(int value) {
    data.push_back(value); // Add element to the back of the queue
}

void Queue::dequeue() {
    if (!data.empty()) {
        data.erase(data.begin()); // Remove the first element
    } else {
        std::cout << "Queue is empty, nothing to dequeue!\n";
    }
}

int Queue::front() const {
    if (!data.empty()) {
        return data.front(); // Return the first element
    } else {
        throw std::runtime_error("Queue is empty, no front element!");
    }
}

bool Queue::isEmpty() const {
    return data.empty(); // Check if the queue is empty
}

void Queue::display() const {
    if (data.empty()) {
        std::cout << "Queue is empty!\n";
        return;
    }
    for (int val : data) {
        std::cout << val << " "; // Print each element
    }
    std::cout << "\n";
}

const std::vector<int>& Queue::getData() const {
    return data; // Return a reference to the internal data vector
}
