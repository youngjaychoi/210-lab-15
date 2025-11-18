# Binary Heap Implementation

This directory contains a Binary Heap (Min-Heap) implementation in C++.

## Files

- `include/BinaryTree.h` - Header file with class declaration
- `src/BinaryTree.cpp` - Implementation file with heap methods
- `test_heap.cpp` - Test program to verify the heap implementation

## Key Method: heapifyUp()

The `heapifyUp()` method maintains the min-heap property after insertion. 

### Algorithm

1. When a new element is inserted, it's added at the end of the heap (the last position in the array)
2. The `heapifyUp()` method is called on this new element
3. The method compares the element with its parent:
   - If the element is smaller than its parent (for min-heap), they are swapped
   - The method is then recursively called on the parent's position
4. This continues until either:
   - The root is reached (index 0), or
   - The heap property is satisfied (the element is not smaller than its parent)

### Complexity

- Time Complexity: O(log n) - worst case travels from leaf to root
- Space Complexity: O(log n) - due to recursive call stack

## Building and Running

```bash
cd lab/lab5/BinaryTree
g++ -std=c++11 -o test_heap test_heap.cpp src/BinaryTree.cpp -I./include
./test_heap
```

## Example Usage

```cpp
BinaryTree heap;
heap.insert(5);
heap.insert(3);
heap.insert(7);
heap.insert(1);

// The heap will maintain min-heap property
// Root will always be the minimum value (1 in this case)
int min = heap.getMin(); // Returns 1
```

## Heap Property

For a min-heap:
- The value at any node is less than or equal to the values of its children
- The minimum element is always at the root (index 0)
- For any node at index i:
  - Parent is at index (i-1)/2
  - Left child is at index 2*i+1
  - Right child is at index 2*i+2
