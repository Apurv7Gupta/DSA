```cpp
#include <forward_list>

int main() {

    // Singly linked list
    forward_list<int> nums;

    nums.push_front(30);
    nums.push_front(20);
    nums.push_front(10);

    // List becomes:
    // 10 -> 20 -> 30

    for (int x : nums) {
        cout << x << " ";
    }
}
```

```txt
Output: 10 20 30
```
