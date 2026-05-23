# C++ Custom Linked List Operations Implementation

## 1. Node Structure

```cpp
struct Node {
    int data;
    Node* next;

    // Constructor
    Node(int value) {
        data = value;
        next = nullptr;
    }
};
```

### Explanation

- `data` stores the value of the node.
- `next` stores the address of the next node.
- The constructor initializes the node with a value and sets `next` to `nullptr`.

---

## 2. Linked List Class

```cpp
class LinkedList {
private:
    Node* head;

public:
    // Constructor
    LinkedList() {
        head = nullptr;
    }
};
```

### Explanation

- `head` points to the first node in the linked list.
- Initially, the list is empty, so `head` is `nullptr`.

---

## 3. Insert Operation

```cpp
void insert(int value) {
    Node* newNode = new Node(value);

    // If list is empty
    if (head == nullptr) {
        head = newNode;
        return;
    }

    // Traverse to last node
    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }

    temp->next = newNode;
}
```

### Explanation

- Creates a new node dynamically using `new`.
- If the list is empty, the new node becomes the head.
- Otherwise, traverses to the last node and connects the new node there.

---

## 4. Delete Operation

```cpp
void remove(int value) {
    if (head == nullptr) return;

    // If head node needs deletion
    if (head->data == value) {
        Node* deleteNode = head;
        head = head->next;
        delete deleteNode;
        return;
    }

    Node* temp = head;

    // Find node before target
    while (temp->next != nullptr && temp->next->data != value) {
        temp = temp->next;
    }

    // Value not found
    if (temp->next == nullptr) return;

    Node* deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
}
```

### Explanation

- Checks if the list is empty.
- If the node to delete is the head, updates the head pointer.
- Otherwise, finds the node before the target node.
- Removes the target node and frees memory using `delete`.

---

## 5. Display Operation

```cpp
void display() {
    Node* temp = head;

    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}
```

### Explanation

- Traverses the linked list from the head node.
- Prints each node’s data followed by `->`.
- Ends with `NULL` to indicate the end of the list.

---

## 6. Destructor

```cpp
~LinkedList() {
    Node* temp;

    while (head != nullptr) {
        temp = head;
        head = head->next;
        delete temp;
    }
}
```

### Explanation

- Automatically runs when the object is destroyed.
- Frees all dynamically allocated nodes.
- Prevents memory leaks.

---

## 7. Main Function

```cpp
int main() {
    LinkedList list;

    // Insert nodes
    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.insert(40);

    cout << "Linked List:" << endl;
    list.display();

    // Delete node
    list.remove(20);

    cout << "After deleting 20:" << endl;
    list.display();

    return 0;
}
```

### Explanation

- Creates a linked list object.
- Inserts multiple nodes into the list.
- Displays the list.
- Deletes a node with value `20`.
- Displays the updated list.

---

## Final Output

```text
Linked List:
10 -> 20 -> 30 -> 40 -> NULL

After deleting 20:
10 -> 30 -> 40 -> NULL
```
