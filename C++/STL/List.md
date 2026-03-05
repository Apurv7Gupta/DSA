![[Excalidraw/STL.md#^group=iBfCE3-NhtrO0oTYHNoey]]
- implements a ==doubly linked list=

- in which each element contains the address of next and previous element in the list. 

- It stores data in ==non-contiguous== memory, hence providing ==fast insertion and deletion== once the position of the element is known.

- Unlike vectors, lists ==do not support random access.== 

- To access any element at a given position, go through the list sequentially from the start or the end to the desired position. 

- However, first and last elements can be quickly accessed using front() and back() methods respectively. 


| Operation               | Time Complexity | Space Complexity |
|-------------------------|-----------------|------------------|
| Access by index         | O(n)            | O(1)             |
| Insertion at front      | O(1)            | O(1)             |
| Insertion at back       | O(1)            | O(1)             |
| Insertion in middle     | O(1)            | O(1)             |
| Deletion at front       | O(1)            | O(1)             |
| Deletion at back        | O(1)            | O(1)             |
| Deletion in middle      | O(1)            | O(1)             |
| Search (find)           | O(n)            | O(1)             |
| Size                    | O(1)            | O(1)             |
| Total space (n elements)| —               | O(n)             |



`push_front()` ^pushfront

Add an element to the front of the list.

`push_back()` ^pushback

Adds an element to the end of the list

`pop_front()` ^popfront

Remove the first element of the list.

`pop_back()` ^popback

Removes the last element of the list.

`emplace_front()` ^emplacefront

Constructs and inserts an element at the front of the list.

`emplace_back()` ^emplaceback

Constructs and inserts an element at the end of the list.

`assign()` ^assign

Assigns values to the list.

`unique()`

Removes all duplicate consecutive elements from the list. It works only on **sorted** list.