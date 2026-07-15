### Floyd's Cycle detection Algo (Rabbit hare method)

```cpp
    Node* slow = head;
    Node* fast = head;

    while (fast != nullptr && fast->next != nullptr)
    {
        slow = slow->next;          // 1 step
        fast = fast->next->next;    // 2 steps

        if (slow == fast)           // same node address => pointers have met
            return true;            // cycle exists
    }
```
