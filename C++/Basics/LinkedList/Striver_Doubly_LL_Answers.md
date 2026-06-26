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
Node* insertAtTail(int value, Node* head, Node* curr_tail = nullptr){

    Node* newTail = new Node(value);

    if (curr_tail)                  // if current tail is provided => O(1)
    {
        curr_tail->next = newTail;
        newTail->prev = curr_tail;
        return newTail;
    }

    else
    {

        if(head == nullptr)             // if list is empty
            return newTail;

        Node* temp = head;

        while(temp->next != nullptr)        // find the tail => O(n)
            temp = temp->next;

        temp->next = newTail;
        newTail->prev = temp;
    }

    return newTail;
}

// usage: tail = insertAtTail(9, head); or tail = insertAtTail(9, head, tail);


```

### Delete Tail

```cpp
Node* deleteTail(Node*& head, Node* tail = nullptr){        // *& because we're passing head by ref

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

t: , s:

```cpp

```

### Main

```cpp
int main()
{
// create a Doubly LL:

    // ====================================


    // =================Print LL===============


     // =================Find length of LL===============


    // =================Search in DLL===============
    // given: 0->1->2, k = 2

    // t: , s:

   // =================Detect cycle in DLL===============


}
```
