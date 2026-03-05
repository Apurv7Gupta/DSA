==Builds the sorted array one element at a time==. 

Works like sorting playing cards in your hand, where ==each new card is inserted into its correct position== among the already sorted cards.

We start with the second element, assuming the first is already sorted. 

If the second element is smaller, we shift the first element and insert the second in the correct position. 

Then we move to the third element and place it correctly among the first two. 

This process continues until the entire array is sorted.

#### Complexity:

| Time   | Space |
| ------ | ----- |
| O(n^2) | O(1)  |
