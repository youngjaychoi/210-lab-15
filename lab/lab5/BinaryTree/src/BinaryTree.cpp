#include "../include/BinaryTree.h"

BinaryTree::BinaryTree() {
    // Constructor - empty heap
}

int BinaryTree::getParentIndex(int index) const {
    return (index - 1) / 2;
}

void BinaryTree::swap(int index1, int index2) {
    int temp = heap[index1];
    heap[index1] = heap[index2];
    heap[index2] = temp;
}

void BinaryTree::insert(int value) {
    // Add the new value at the end of the heap
    heap.push_back(value);
    
    // Maintain heap property by moving the element up if needed
    heapifyUp(heap.size() - 1);
}

// TODO: Implement this method to maintain heap property after insertion
void BinaryTree::heapifyUp(int index) {
    // Base case: if we're at the root, we're done
    if (index == 0) {
        return;
    }
    
    int parentIndex = getParentIndex(index);
    
    // For a min-heap, if the current element is smaller than its parent,
    // swap them and continue heapifying up
    if (heap[index] < heap[parentIndex]) {
        swap(index, parentIndex);
        heapifyUp(parentIndex);
    }
}

int BinaryTree::getMin() const {
    if (heap.empty()) {
        throw std::runtime_error("Heap is empty");
    }
    return heap[0];
}

int BinaryTree::size() const {
    return heap.size();
}

bool BinaryTree::isEmpty() const {
    return heap.empty();
}

void BinaryTree::print() const {
    std::cout << "Heap contents: ";
    for (int i = 0; i < heap.size(); i++) {
        std::cout << heap[i] << " ";
    }
    std::cout << std::endl;
}
