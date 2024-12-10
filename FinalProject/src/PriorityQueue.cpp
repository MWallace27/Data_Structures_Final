#include "PriorityQueue.h"

void PriorityQueue::enqueue(int value) {
    pq.push(value); // Add the value to the priority queue
}

void PriorityQueue::dequeue() {
    if (!pq.empty()) {
        pq.pop(); // Remove the highest-priority element
    } else {
        std::cout << "Priority queue is empty, nothing to dequeue!\n";
    }
}

int PriorityQueue::peek() const {
    if (!pq.empty()) {
        return pq.top(); // Return the highest-priority element
    } else {
        throw std::runtime_error("Priority queue is empty, no top element!");
    }
}

bool PriorityQueue::isEmpty() const {
    return pq.empty(); // Check if the priority queue is empty
}

void PriorityQueue::display() const {
    if (pq.empty()) {
        std::cout << "Priority queue is empty!\n";
        return;
    }

    // Create a copy of the priority queue to display elements non-destructively
    std::priority_queue<int> temp = pq;
    while (!temp.empty()) {
        std::cout << temp.top() << " ";
        temp.pop();
    }
    std::cout << "\n";
}

std::vector<int> PriorityQueue::getData() const {
    std::vector<int> result;
    std::priority_queue<int> temp = pq; // Copy the priority queue

    // Extract elements into a vector
    while (!temp.empty()) {
        result.push_back(temp.top());
        temp.pop();
    }

    return result;
}
