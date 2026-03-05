![[Excalidraw/STL.md#^group=OoZw9QlE]]


- A ==dynamic array==

- Has the ability to ==resize itself automatically== when an element is inserted or deleted.

- Store collection of ==elements of same type== in ==contiguous memory==


| Space complexity |
| ---------------- |
| O(n)             |


| Operation                 | Time Complexity                 |
| ------------------------- | ------------------------------- |
| Access                    | O(1)                            |
| Insert (end)              | Amortized O(1), Worst-case O(n) |
| Insert (beginning/middle) | O(n)                            |
| Delete (end)              | O(1)                            |
| Delete (beginning/middle) | O(n)                            |

![[Excalidraw/STL.md#^VISuFzK0]] ^pushback

 insert the element passed in the parameter in the vectors, the element is inserted at the end.


![[Excalidraw/STL.md#^XckH7Ss0]] ^popback

removes the last element from the vector


![[Excalidraw/STL.md#^Cik2wnJY]] ^front

 Returns a reference to the first element of the vector.

![[Excalidraw/STL.md#^xxRh1XSi]] ^back

Returns a reference to the last element of the vector.



![[Excalidraw/STL.md#^j2lifdnd]] ^capacity

returns the current capacity of the vector.