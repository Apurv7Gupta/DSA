![[Excalidraw/STL.md#^group=iqiZ_TAHSIkH8PkyBe_Eh]]

- Unordered associative container

- ==Unique Elements==.

- Unlike set, it stores elements using ==hashing==   ---> O(1) for search, insert, delete

- Elements are not sorted in any particular order.


![[Excalidraw/STL.md#^1mIQKZb1]] ^bucket

Returns the bucket number in which a given element is. Bucket size varies from `0 to bucket_count-1`

![[Excalidraw/STL.md#^u8t7Jzh8]] ^bucketcount

Returns the total number of buckets in the unordered container.

![[Excalidraw/STL.md#^jRpmhSL4]] ^bucketsize

Returns the total number of elements present in a specific bucket in an unordered set.

![[Excalidraw/STL.md#^Qf1bKH3T]] ^maxbucketcount

Return the maximum number of buckets that unordered set can hold.

![[Excalidraw/STL.md#^mpQ8nODB]] ^loadfactor

> [!Load Factor = a measure that represents the ratio between the number of elements in a container (its size) and the number of buckets (bucket_count)]
> Returns the current load factor in the unordered set.

![[Excalidraw/STL.md#^xGmYjCbb]] ^maxloadfactor

Returns the current maximum load factor of the unordered set.

![[Excalidraw/STL.md#^ejsRaYxS]] ^hashfunction

This hash function is a unary function that takes a single argument only and returns a unique value of type size_t based on it.

![[Excalidraw/STL.md#^2fxapaHB]] ^rehash

Set the number of buckets in the container of unordered set to a given size or more.

![[Excalidraw/STL.md#^qwWvQnTH]] ^emplace

- Insert an object in the container, but
- Constructs the object in-place inside the container.
- Avoids unnecessary copy/move.

![[Excalidraw/STL.md#^XvvMiEOL]] ^emplacehint
`container_name.emplace_hint(iterator position, key, element);`

Inserts a new element in the unordered set only if the value to be inserted is unique, with a given hint.

![[Excalidraw/STL.md#^XjuFRi2m]] ^reserve

Used to request a capacity change of unordered set.

`key_eq()` ^keyeq

Returns a boolean value according to the comparison. It returns the key equivalence comparison predicate used by the unordered set.
