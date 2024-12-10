#ifndef PRIORITYQUEUE_H
#define PRIORITYQUEUE_H

#include <queue>
#include <iostream>
#include <vector>

class PriorityQueue {
private:
    // Using a max-heap priority queue
    std::priority_queue<int> pq;

public:
    // Adds an element to the priority queue
    void enqueue(int value);

    // Removes the highest-priority element
    void dequeue();

    // Retrieves the highest-priority element without removing it
    int peek() const;

    // Checks if the priority queue is empty
    bool isEmpty() const;

    // Displays the elements of the priority queue (non-destructive)
    void display() const;

    // Returns a sorted vector of the queue's elements for visualization
    std::vector<int> getData() const;
};

#endif
