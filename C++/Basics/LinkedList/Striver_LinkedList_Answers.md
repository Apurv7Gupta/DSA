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

    Node(int value, Node *nextNode) // constructor w/ nextptr
    {
        data = value;
        next = nextNode;
    }
};
```

### insertAtHead

t, s: O(1)

```cpp
Node *insertAtHead(Node *currHead, int newHead)
{
    Node *newNode = new Node(newHead, currHead);

    return newNode;
}
```

<!-- ### DeleteLastNode

t, s: O(1)

```cpp
Node *insertAtHead(Node *Head)
{
    if(Head = NULL || Head->next){
        delete Head;
        return NULL;
        }
}
``` -->

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

}
```
