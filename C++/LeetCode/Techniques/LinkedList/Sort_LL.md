### Merge Sort (most common)

1. Find the middle.
2. Recursively sort the left and right halves.
3. Merge the two sorted lists.

```cpp
private:
    ListNode* merge(ListNode* left, ListNode* right) {
        ListNode dummy(0);
        ListNode* tail = &dummy;

        while (left != nullptr && right != nullptr) {
            if (left->val <= right->val) {
                tail->next = left;
                left = left->next;
            } else {
                tail->next = right;
                right = right->next;
            }
            tail = tail->next;
        }

        // Attach the remaining nodes
        if (left != nullptr)
            tail->next = left;
        else
            tail->next = right;

        return dummy.next;
    }

public:
    ListNode* sortList(ListNode* head) {

        if (head == nullptr || head->next == nullptr)               // Base case: 0 or 1 node
            return head;

        // =============Find the middle=================
        ListNode* slow = head;
        ListNode* fast = head->next;

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }
        // =============================================

        // Split the list into two halves
        ListNode* right = slow->next;
        slow->next = nullptr;

        // Recursively sort both halves
        ListNode* left = sortList(head);
        right = sortList(right);

        // Merge the sorted halves
        return merge(left, right);
    }
```

### Bubble Sort

In bubble sort, if the current value is greater than the next value, you swap them.

```cpp
bool swapped;

do {
    swapped = false;

    ListNode* temp = head;

    while (temp != nullptr && temp->next != nullptr) {
        if (temp->val > temp->next->val) {
            swap(temp->val, temp->next->val);
            swapped = true;
        }

        temp = temp->next;
    }

} while (swapped);
```
