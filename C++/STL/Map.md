![[Excalidraw/STL.md#^group=bsrd7URKI7gz0Oba4CkMY]]
- Associative container

- Store data in the form of ==key value pairs== sorted on the basis of keys. 

- Mapped values must have ==unique keys==

- By default, it stores data in ==ascending order of the keys==, but this can be changed as per requirement.


#### Internal Working:

- provides the built-in implementation of ==Red-Black Tree==


| Time Complexity | Space Complexity |
| --------------- | ---------------- |
| O(log n)        | O(n)             |

| In-order Traverse | O(n) | O(n) |
| ----------------- | ---- | ---- |

`at()` ^at
used to find the element associated with the key k.

`value_comp()` ^valuecomp
Returns the object that determines how the elements in the map are ordered ('<' by default).