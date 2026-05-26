## 1. MAX-HEAP (Default) [descending order]

```cpp
#include <iostream>
#include <queue>
#include <vector>

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
```


## 2. MIN-HEAP [ascending order]

```cpp
    // Syntax: std::priority_queue<Type, Container, Comparator>
    
    std::priority_queue<int, std::vector<int>, std::greater<int>> minHeap;
    
	// Push elements
    maxHeap.push(10);
    maxHeap.push(30);
    maxHeap.push(20);
    maxHeap.push(5);

    std::cout << "top element: " << minHeap.top() << std::endl;
	// => Outputs 5

    // Popping elements (removes the smallest)
    
    minHeap.pop();
    std::cout << "Min-Heap top after pop: " << minHeap.top() << std::endl;
	// => Outputs 10
```


## 3. ESSENTIAL CHECKS (Common to both)

```cpp
    
    if (!minHeap.empty()) {
        std::cout << "Min-Heap size: " << minHeap.size() << std::endl;
    }

```

## 4. Traversal

A `priority_queue` cannot directly give the 2nd or 3rd element.

Options:

1. Pop elements one by one
2. Copy into a vector/PQ (min or max)
3. Use `set`, `multiset`, or `vector + sort`


```cpp

priority_queue<int> pq;  
  
pq.push(50);  
pq.push(40);  
pq.push(30);  
pq.push(20);  
pq.push(10);  
  
// Copy the queue  
priority_queue<int> temp = pq;  
  
// Remove first 2 elements  
temp.pop(); // 50  
temp.pop(); // 40  
  
// Now top is the 3rd element  
cout << "3rd element = " << temp.top();

```

```cpp

priority_queue<int> pq;  
  
pq.push(50);  
pq.push(40);  
pq.push(30);  
pq.push(20);  
pq.push(10);  
  
vector<int> removed;  
  
// Pop first 2 elements  
for (int i = 0; i < 2; i++) {  
	removed.push_back(pq.top());  
	pq.pop();  
}  
  
// 3rd element  
cout << "3rd element = " << pq.top() << endl;  
  
// Restore removed elements  
for (int x : removed) {  
	pq.push(x);  
}  
  
// Queue restored  
cout << "Top after restore = " << pq.top();

```


Priority queue is a container adaptor generally built over vector container. We can implement both of these heaps in priority queue. 

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

| Operation | Time Complexity | Space Complexity |
| --------- | --------------- | ---------------- |
| push()    | O(log n)        | O(n)             |
| pop()     | O(log n)        | O(n)             |
| top()     | O(1)            | O(n)             |
| size()    | O(1)            | O(n)             |
| empty()   | O(1)            | O(n)             |
