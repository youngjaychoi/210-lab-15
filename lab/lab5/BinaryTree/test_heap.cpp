#include <iostream>
#include "../include/BinaryTree.h"

int main() {
    BinaryTree heap;
    
    std::cout << "Testing Binary Heap (Min-Heap) Implementation\n";
    std::cout << "=============================================\n\n";
    
    // Test 1: Insert elements in random order
    std::cout << "Test 1: Inserting elements: 5, 3, 7, 1, 9, 2\n";
    heap.insert(5);
    heap.print();
    
    heap.insert(3);
    heap.print();
    
    heap.insert(7);
    heap.print();
    
    heap.insert(1);
    heap.print();
    
    heap.insert(9);
    heap.print();
    
    heap.insert(2);
    heap.print();
    
    std::cout << "\nMinimum value: " << heap.getMin() << std::endl;
    std::cout << "Heap size: " << heap.size() << std::endl;
    
    // Test 2: Insert descending order
    std::cout << "\nTest 2: Creating new heap with descending values\n";
    BinaryTree heap2;
    heap2.insert(10);
    heap2.insert(8);
    heap2.insert(6);
    heap2.insert(4);
    heap2.insert(2);
    heap2.print();
    std::cout << "Minimum value: " << heap2.getMin() << std::endl;
    
    // Test 3: Insert ascending order
    std::cout << "\nTest 3: Creating new heap with ascending values\n";
    BinaryTree heap3;
    heap3.insert(1);
    heap3.insert(2);
    heap3.insert(3);
    heap3.insert(4);
    heap3.insert(5);
    heap3.print();
    std::cout << "Minimum value: " << heap3.getMin() << std::endl;
    
    std::cout << "\nAll tests completed successfully!\n";
    
    return 0;
}
