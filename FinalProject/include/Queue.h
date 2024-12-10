#ifndef QUEUE_H
#define QUEUE_H

#include <vector>
#include <iostream>

class Queue {
private:
    std::vector<int> data; // Internal storage for the queue

public:
    // Adds an element to the back of the queue
    void enqueue(int value);

    // Removes an element from the front of the queue
    void dequeue();

    // Retrieves the front element without removing it
    int front() const;

    // Checks if the queue is empty
    bool isEmpty() const;

    // Prints the queue elements to the console
    void display() const;

    // Provides access to the queue data for visualization
    const std::vector<int>& getData() const;
};

#endif
