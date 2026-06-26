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

t: , s:

```cpp
// take the prevNode (final node) & conn it w/ your value

Node* insertAtTail(int value, Node* head, Node* curr_tail){

    Node* newTail = new Node(value);

    if (curr_tail)                  // if current tail is provided => O(1)
    {
        curr_tail->next = newTail;
        newTail->prev = curr_tail;
        return head;
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

    return head;
}



```

### Delete Head

t: , s:

```cpp

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
