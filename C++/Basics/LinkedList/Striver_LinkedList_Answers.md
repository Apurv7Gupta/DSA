### Struct

```cpp
struct Node
{
    int data;
    Node *next;

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
```

### insertAtHead

t, s: O(1)

```cpp
Node* insertAtHead(Node* currHead, int newHead)
{
    Node *newNode = new Node(newHead, currHead);

    return newNode;
}
```

### DeleteLastNode

t, s: O(1)

```cpp
Node* deleteTailNode(Node* Head)
{
    if(head == nullptr || head->next == nullptr){          // If list is empty or has one node
        delete head;
        return nullptr;
    }

    // Traverse to the 2nd-last node
    Node* curr = head;
    while(curr->next->next != nullptr)
        curr = curr->next;

    // delete tail node (last node)
    delete curr->next;
    curr->next = nullptr;

    return head;                        // return updated head

}
```

### Main

```cpp
int main()
{
// create a singly LL:
Node *head = new Node(1);
head->next = new Node(2);
head->next->next = new Node(3);
head->next->next->next = new Node(4);

    // ====================================
    head = insertAtHead(head, 0);

    // =================Print LL===============
    Node *temp = head;

    while (temp != nullptr)
    {
        cout << temp->data << ' ';
        temp = temp->next;
    }

     // =================Find length of LL===============
    Node *temp = head;

    int count = 0;
    while (temp != nullptr)
    {
        count++;
        temp = temp->next;
    }

    cout << "the length of the LinkedList = "<< count;

    // =================Search in LL===============
    // given: 0->1->2, k = 2

    Node *temp = head;

    while (temp != nullptr)
    {
        if(temp->data == k){
            cout<< "Found";
            break;
        }

        temp = temp->next;
    }
    // t: O(n), s: O(1)

   // =================Detect cycle in LL===============
    Node* slow = head;
    Node* fast = head;

    while (fast != nullptr && fast->next != nullptr)
    {
        slow = slow->next;          // 1 step
        fast = fast->next->next;    // 2 steps

        if (slow == fast)           // same node address => pointers have met
            return true;            // cycle exists
    }

}
```
