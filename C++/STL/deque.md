deque container provides fast insertion and deletion at both ends. 

- Stands for: 
-==D==ouble ==E==nded ==QUE==ue

- it is a special type of queue where ==insertion and deletion operations are possible at both the ends== in constant time complexity.

#### Traversing

- Deque can be traversed by simply using a loop

- in which each element is accessed using its index.

- In deque, the indexes start from 0 and goes till  `deque.size()` - 1.

- where the function `size()` returns the current number of elements in the deque.

deque<int> dq = {1, 4, 2, 3, 5};

    // Traversing using the for loop
    for (int i = 0; i < dq.size(); i++) 
        cout << dq[i] << " ";

#### Updating Elements

Elements in a deque can be updated by assigning the new value using assignment operator while accessing the element by index.

****Example:****

#include <bits/stdc++.h>

using namespace std;

​

int main() {

    deque<int> dq = {1, 4, 2, 3, 5};

​

    // Updating element

    dq[2] = 8;

    cout << dq[2]; 

    return 0;

}