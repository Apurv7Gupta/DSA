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

### Insert node before head

t: , s:

```cpp

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
