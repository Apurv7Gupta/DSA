![[Excalidraw/STL.md#^group=SvG8rhV3Ab3jQupjAKnx2]]
 
 - Unordered associative container
 
 - stores data in the form of key-value pairs.
 
 - It is similar to unordered map 
 -but it allows ==non unique key==
 
 - provides fast insertion, deletion and search operations in O(1) time by using ==hashing==

#### Internal Working:
- Hash table implementation

- When an element is inserted, its key is hashed
- and the hash value determines the index of the bucket at which the value is stored.

- Elements with the same hash value (i.e. with same keys) are stored in the same bucket. 

- These buckets are generally implemented as ==linked lists==.  

