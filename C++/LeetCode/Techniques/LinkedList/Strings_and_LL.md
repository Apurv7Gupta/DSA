Create a string from an LL:

```cpp
        string list1;

        ListNode* temp = l1;

        while (temp != nullptr) {
            list1 += char(temp->val + '0');
            temp = temp->next;
        }
```

Create an LL from a string

```cpp
        ListNode* head = nullptr;
        ListNode* tail = nullptr;

        for (char c : s) {
            ListNode* node = new ListNode(c - '0');

            if (head == nullptr) {
                head = tail = node;
            } else {
                tail->next = node;
                tail = node;
            }
        }

```
