 ![[Excalidraw/STL.md#^group=c6nvdRGuN3scuOuyw8d8S]] 
 
 - linear data structure
 
 - follows a particular order of performing operations (LIFO or FILO)

- stack container follows ==LIFO==  order of insertion and deletion in C++.

- This is done by ==inserting and deleting elements at only one end== of the stack (generally called the top of the stack) 

- ==We can't access any middle element of stack, only the top==

- In C++, it's not a standalone data structure but ==a wrapper== built on top of existing containers like `std::vector`, `std::deque`, or `std::list`. It gives you **stack-like** behavior (LIFO) by restricting access to only a subset of operations (push, pop ,top, empty, size).

### Under the hood:


`template<     class T,     class Container = std::deque<T> > class stack;`

- Default container is `std::deque`, but you can change it to `std::vector` or `std::list` if needed.
    
- It uses the container’s `back()` for `top()`, `push_back()` for `push()`, and `pop_back()` for `pop()`.


LIFO ![LIFO](https://media.geeksforgeeks.org/wp-content/uploads/20240606180844/Push-Operation-in-Stack-(1).webp)


| Time Complexity      | O(1)     |
| -------------------- | -------- |
| **Space Complexity** | **O(n)** |

Psuedo Traversal


> **Note:** Though stacks can be possibly implemented using vectors, its middle elements cannot be accessed due to LIFO restrictions.


#### Functions

`push()` ^push

Add an element top of the stack.

`push_range()` ^pushrange

Add range of elements at top of the stack.

`top()` ^top

Access the top element of the stack.

Top/Peek Operation![[Top/Peek Operation](https://media.geeksforgeeks.org/wp-content/uploads/20240606181023/Top-or-Peek-Operation-in-Stack-(1).webp)


`pop()` ^pop

Remove the top element of the stack.

`emplace()` ^emplace

Add the constructs element in top of the stack.

`size()` ^size

Returns the number of elements in the stack.

`empty()` ^empty

Checks if the stack is empty.

`swap()` ^swap

Swap two stacks.
 