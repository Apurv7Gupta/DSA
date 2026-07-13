### Struct

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

### Insert at end

```cpp
Node* insertAtTail(int value, Node*& head, Node* curr_tail = nullptr){        // *& because we're passing head by ref

    Node* newTail = new Node(value);

    // ==============if current tail is provided => O(1)==============
    if (curr_tail)
    {
        curr_tail->next = newTail;
        newTail->prev = curr_tail;
        return newTail;
    }

    if(head == nullptr){             // if list is empty
        head = newTail;
        return newTail;
    }

   // ==============if tail is not provided => O(n)==============
    Node* temp = head;

    while(temp->next != nullptr)
        temp = temp->next;

    temp->next = newTail;
    newTail->prev = temp;


    return newTail;
}

// Usage: tail = insertAtTail(9, head); or tail = insertAtTail(9, head, tail);


```

### Delete Tail

```cpp
Node* deleteTail(Node*& head, Node* tail = nullptr){

    if(head == nullptr)                 // if LL empty
        return nullptr;

    if(head->next == nullptr){          // if only one element
        delete head;
        head = nullptr;
        return nullptr;
    }


    // ==============if tail is provided => O(1)==============
    if (tail)
    {
        Node* newTail = tail->prev;     // create new tail
        newTail->next = nullptr;        // unlink old tail
        delete tail;                    // delete old tail
        return newTail;
    }

    // ==============if tail is not provided => O(n)==============
    Node* temp = head;

    while(temp->next != nullptr)
        temp = temp->next;

    Node* newTail = temp->prev;     // create new tail
    newTail->next = nullptr;        // unlink old tail
    delete temp;                    // delete old tail
    return newTail;
}

// Usage: tail = deleteTail(head) or tail = deleteTail(head, tail)

```

### Reverse a Doubly Linked List

t: O(n) , s: O(1)

```cpp
Node *reverseDLL(Node *head)
{
    Node *curr = head;
    Node *temp = nullptr;

    while (curr != nullptr)
    {
        temp = curr->prev;               // save prev
        curr->prev = curr->next;        // new prev = old next
        curr->next = temp;             // new next = old prev (swap complete)

        curr = curr->prev;            // move to the next node
    }

    if (temp != nullptr)                // update head
        head = temp->prev;


    return head;
}
```

### Main

```cpp
int main()
{
    // create a Doubly LL:
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->prev = head;

    head->next->next = new Node(3);
    head->next->next->prev = head->next;

    head->next->next->next = new Node(4);
    head->next->next->next->prev = head->next->next;
    // ====================================


    // =================Print LL===============
    Node temp = head;
    while(temp != nullptr){
        cout << temp->val;
        temp = temp->next;
    }

     // =================Find length of LL===============


    // =================Search in DLL===============
    // given: 0->1->2, k = 2

    // t: , s:

   // =================Detect cycle in DLL===============


}
```
