![[Excalidraw/STL.md#^group=5cBqfyYyBoIED5icrRA1h]]

- A type of queue in which there is some ==priority assigned to the elements==. 

- According to this priority, elements are removed from the queue.

- By default, the ==value== of the element being inserted ==is considered as priority==. 

- ==Higher its value, higher its priority==. But this can be changed to any desired priority scheme as per requirement.

#### Internal Working
provides the built-in implementation of a ==binary heap== data structure. 

There can be two types of heaps:

- ==Max-heap== in which the priority is given to the largest element. (Default)

- ==Min-heap== in which the priority is given to the smallest element.

| Operation           | Time Complexity | Space Complexity |
|---------------------|------------------|-------------------|
| push()              | O(log n)         | O(n)              |
| pop()               | O(log n)         | O(n)              |
| top()               | O(1)             | O(n)              |
| size()              | O(1)             | O(n)              |
| empty()             | O(1)             | O(n)              |

Priority queue is a container adaptor generally built over vector container. We can implement both of these heaps in priority queue. 

```cpp

#include <iostream>
#include <queue>
#include <vector>

int main() {
    // 1. MAX-HEAP (Default) [descending order]
    std::priority_queue<int> Name;

    // Push elements
    maxHeap.push(10);
    maxHeap.push(30);
    maxHeap.push(20);
    maxHeap.push(5);

    std::cout << "top element: " << maxHeap.top() << std::endl;
    // => Outputs 30

    // Popping elements (removes the largest)
    maxHeap.pop(); 
    std::cout << "Max-Heap top after pop: " << maxHeap.top() << std::endl;
    // => Outputs 20



    // 2. MIN-HEAP [ascending order]
    // Syntax: std::priority_queue<Type, Container, Comparator>
    std::priority_queue<int, std::vector<int>, std::greater<int>> minHeap;

    // Push elements
    minHeap.push(10);
    minHeap.push(30);
    minHeap.push(20);
    minHeap.push(5);

    std::cout << "top element: " << minHeap.top() << std::endl;
	// => Outputs 5

    // Popping elements (removes the smallest)
    minHeap.pop();
    std::cout << "Min-Heap top after pop: " << minHeap.top() << std::endl;
	// => Outputs 10

    // ----------------------------------------------------------------
    // 3. ESSENTIAL CHECKS (Common to both)
    // ----------------------------------------------------------------
    if (!minHeap.empty()) {
        std::cout << "Min-Heap size: " << minHeap.size() << std::endl;
    }

    return 0;
}

```
