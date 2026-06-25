Define the LinkedList procedurally:

```cpp
struct Node {
    int data;
    Node* next;
};

Node* head = nullptr;
```

Then separate functions:

```cpp
void insertNode(Node*& head, int value);
void removeNode(Node*& head, int value);
void display(Node* head);
```

In normal DSA practice, you manually create and manipulate the linked list using pointers and helper functions.

# In Leetcode:

Leetcode already defines this internally:

```cpp
struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}                     // cons w/o anything
      ListNode(int x) : val(x), next(nullptr) {}                // cons w/ only data
      ListNode(int x, ListNode *next) : val(x), next(next) {}   // cons w/ both data and next
  };
```

and you work in here:

```cpp
class Solution {
public:
    ListNode* reverseList(ListNode* head) {

        // Previous node
        ListNode* prev = nullptr;

        // Current node
        ListNode* curr = head;

        while (curr != nullptr) {

            // Store next node
            ListNode* nextNode = curr->next;

            // Reverse pointer
            curr->next = prev;

            // Move prev forward
            prev = curr;

            // Move curr forward
            curr = nextNode;
        }

        // New head
        return prev;
    }
};
```

In LeetCode, the linked list structure and test cases are already created internally, and you only implement the algorithm logic inside the provided function.
