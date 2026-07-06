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

#### Sort & Merge 2 lists recursively

```cpp
ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    if (list1 == nullptr) return list2;
    if (list2 == nullptr) return list1;

    if (list1->val < list2->val) {
        list1->next = mergeTwoLists(list1->next, list2);
        return list1;
    } else {
        list2->next = mergeTwoLists(list1, list2->next);
        return list2;
    }
}
```

Explanation

```cpp
list1: 1 -> 3 -> 5
list2: 2 -> 4 -> 6

First Call: merge(1, 2)         => Since 1 < 2, we know 1 must be the first node of the merged list.

What should come after 1?       => list1->next = mergeTwoLists(list1->next, list2);

                                => 1->next = merge(3, 2);       // Second call
Now 2 is smaller, So 2 goes next.

    2->next = merge(3, 4);                                      // Third Call
    return 2;

3 is smaller.

    3->next = merge(5,4);                                       // Fourth Call
    return 3;

4 is smaller

    4->next = merge(5,6);                                       // Fifth Call
    return 4;

5 is smaller

    5->next = merge(nullptr,6);
    return 5;

Base Case: merge(nullptr,6)                                     // End of recursion
============================================================================================
Now the stack unwinds

The last call was:  5->next = merge(nullptr,6);
                    Since merge(nullptr,6) returned 6,
                    it becomes 5 -> 6

Previous call:      4->next = merge(5,6);
                    4 -> 5 -> 6

Previous call:      3->next = merge(5,4);
                    3 -> 4 -> 5 -> 6

Previous call:      2->next = merge(3,4);
                    2 -> 3 -> 4 -> 5 -> 6

Previous call:      1->next = merge(3,2);
                    1 -> 2 -> 3 -> 4 -> 5 -> 6

Pseudocode:

if (list1 is smaller)
{
    keep list1;
    list1->next = merge(rest_of_list1, list2);
    return list1;
}
else
{
    keep list2;
    list2->next = merge(list1, rest_of_list2);
    return list2;
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
