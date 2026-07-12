SLL Strcut:

```cpp
struct Node {
    int data;
    Node* next;

    Node(int value) // constructor w/o nextptr
    {
        data = value;
        next = nullptr;
    }

    Node(int value, Node* nextNode) // constructor w/ nextptr
    {
        data = value;
        next = nextNode;
    }

};

Node* head = nullptr;


// Usage: Node* head = new Node(10);
```

Or if you need an LL of ANY data type (not only int)

```cpp
template <typename T>

struct Node {
    T data;
    Node* next;

    // (define constructors after this)
};

/*
Usage:

Node<int>* head = new Node<int>(10);
Node<std::string>
Node<double>
Node<MyClass>

*/
```

Create Singly LL

```cpp
Node *head = new Node(1);
head->next = new Node(2);
head->next->next = new Node(3);
head->next->next->next = new Node(4);

// ===Or using obj:
Node dummy(0);
dummy.next = 1;
```

DLL Struct:

```cpp
struct Node
{
    int data;
    Node *next;
    Node* prev;

    // Cons w/o nextptr
    Node(int value){
        data = value;
        next = nullptr;
        prev = nullptr;
    }

    // Cons w/ nextptr & prevptr
    Node(int value, Node* nextNode, Node* prevNode){
        data = value;
        next = nextNode;
        prev = prevNode;
    }
};
```

Create Doubly LL:

```cpp
Node *head = new Node(1);
head->next = new Node(2);
head->next->prev = head;

head->next->next = new Node(3);
head->next->next->prev = head->next;

head->next->next->next = new Node(4);
head->next->next->next->prev = head->next->next;
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
