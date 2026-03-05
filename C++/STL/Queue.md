![[Excalidraw/STL.md#^group=IskZ_uqtw8DtyfUwF7hde]]

- Queue container follows the ==FIFO== order of insertion and deletion. 

- This is done by ==inserting elements at one end== (called ==back==)

- ==deleting them from the other end== (called ==front==) of the data structure.

- We use queue because ==**it preserves order**==
-— the earliest request gets handled first — and prevents **data loss** when devices operate at different speeds.

### Example use cases:

- **CPU and keyboard**: Keyboard inputs come slowly compared to CPU processing. The OS queues keypresses so the CPU can process them at its own speed.
    
- **Network communication**: Data packets from a fast sender are queued before being processed by a slower receiver.
    
- **Print spooling**: Multiple print jobs are queued when sent to a single printer.
     
- Algorithms: Breadth First Search of Graph, Level Order Traversal of a Tree.


### Under the hood:



`template<     class T,     class Container = std::deque<T> > class queue;`

It adapts the container by using:

- `push_back()` for `push()`
    
- `pop_front()` for `pop()`
    
- `front()` and `back()` directly
    

Just like `std::stack`, it **hides random access and iterators**, enforcing strict FIFO behavior.


FIFO ![FIFO](https://media.geeksforgeeks.org/wp-content/cdn-uploads/20230726165642/Queue-Data-structure1.png)




#### Pseudo Traversal

- Since only the front and back element can be accessed in a queue, we cannot directly traverse it.

- We can create a copy of the queue, access the front element, and then delete it. 

- By continuing this process until the copied queue is empty, we can effectively traverse all the elements of the queue.