#ifndef BINARYTREE_H
#define BINARYTREE_H

#include <vector>
#include <iostream>

class BinaryTree {
private:
    std::vector<int> heap;
    
    // Helper method to maintain heap property after insertion
    void heapifyUp(int index);
    
    // Helper method to get parent index
    int getParentIndex(int index) const;
    
    // Helper method to swap two elements
    void swap(int index1, int index2);

public:
    BinaryTree();
    
    // Insert a value into the heap
    void insert(int value);
    
    // Get the minimum value (root of min-heap)
    int getMin() const;
    
    // Get the size of the heap
    int size() const;
    
    // Check if heap is empty
    bool isEmpty() const;
    
    // Print the heap
    void print() const;
};

#endif // BINARYTREE_H
