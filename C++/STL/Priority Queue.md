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