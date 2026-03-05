![[Excalidraw/STL.md#^group=-cikFVII7ZRwK-6x4Ulbv]]

- unordered associative container


- stores data in the form of ==unique key-value pairs==.


- But unlike map, unordered map stores its elements using ==hashing==.
-This provides average constant-time complexity O(1) for search, insert, and delete operations 


- but the elements are not sorted in any particular order.


- elements can be updated by simply assigning a new value while accessing using assignment operator(=). 
-But again with [] operator, a new element will be created if the key is not present. 
