![[Excalidraw/STL.md#^group=MR3jpM1HQKzODcOe3f8yg]]

- Associative container similar to map,

- but it can have multiple elements with same keys (==non unique== ). 

- It stores all the elements in ==increasing order based on their keys== by default 

- but can be changed if required. It ==provides fast insertion, deletion and search== on this sorted data.

| Operation          | Time Complexity  |
| ------------------ | ---------------- |
| `insert()`         | O(log n)         |
| `erase(key)`       | O(log n + count) |
| `find(key)`        | O(log n)         |
| `count(key)`       | O(log n + k)     |
| `equal_range(key)` | O(log n + k)     |
| `lower_bound(key)` | O(log n)         |
| `upper_bound(key)` | O(log n)         |
| `begin()/end()`    | O(1)             |

| Resource Usage | Space Complexity |
| -------------- | ---------------- |
| Storage        | O(n)             |
 