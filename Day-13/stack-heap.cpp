// Stack and Heap Memory

// Stack:

// Stack has predefined size, usually smaller than heap.
// Stack memory is used for static memory allocation.
// Variables stored in stack are of fixed size and have a short lifespan.
// Stack memory is automatically managed (LIFO - Last In First Out).
// Accessing stack memory is faster than heap memory.

// Example of stack memory allocation
int stackExample()
{
  int a = 10; // 'a' is stored in stack
  int b = 20; // 'b' is stored in stack
  return a + b;
}

// Heap:

// Heap has a larger size compared to stack.
// Heap memory is used for dynamic memory allocation.
// Variables stored in heap can be of variable size and have a longer lifespan.
// Heap memory is manually managed (requires allocation and deallocation).
// Accessing heap memory is slower than stack memory.

// Example of heap memory allocation
int heapExample()
{
  int arr[] = {1, 2, 3, 4, 5}; // 'arr' is stored in heap
  return arr[0];
}