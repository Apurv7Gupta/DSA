==Repeatedly swaps adjacent elements== if they are in the wrong order.

It performs multiple passes through the array, and in each pass, the ==largest unsorted element moves to its correct position== at the end.

After each pass, we ==ignore the last sorted elements== and continue comparing and swapping remaining adjacent pairs. 

After k passes, the last k elements are sorted.

#### Complexity:

| Time   | Space |
| ------ | ----- |
| O(n^2) | O(1)  |
