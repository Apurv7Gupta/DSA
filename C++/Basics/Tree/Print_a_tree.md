# LevelOrderTraversal

```cpp
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        if (temp == NULL) // last level ended
        {
            cout << endl;

            // if queue still has some child nodes
            if (!q.empty())
                q.push(NULL);
        }
        else
        {
            cout << temp->data << " ";

            if (temp->left)
                q.push(temp->left);

            if (temp->right)
                q.push(temp->right);
        }
    }
```

### Dry Run:

The key idea is: **the queue stores nodes that still need to be processed, and `NULL` acts as a marker saying “this level is finished.”**

Let's use this 2-level tree:

```text
        1
       / \
      2   3
```

So after `buildTree`, we have:

```text
root
 ↓
  1
 / \
2   3
```

### Dry run

Initially:

```cpp
queue<node*> q;

q.push(root);   // push node 1
q.push(NULL);   // mark end of level
```

So the queue is:

```text
[ 1, NULL ]
```

---

### Step 1 — process `1`

```cpp
temp = q.front();  // 1
q.pop();
```

Queue becomes:

```text
[ NULL ]
```

`temp` is **not NULL**, so:

```cpp
cout << temp->data << " ";
```

prints:

```text
1
```

Then we add its children:

```cpp
if (temp->left)
    q.push(temp->left);    // 2

if (temp->right)
    q.push(temp->right);   // 3
```

Queue is now:

```text
[ NULL, 2, 3 ]
```

Notice: **`NULL` is still at the front.** That's important.

---

### Step 2 — process `NULL`

```cpp
temp = q.front();  // NULL
q.pop();
```

Queue becomes:

```text
[ 2, 3 ]
```

Now:

```cpp
if (temp == NULL)
```

is true.

So:

```cpp
cout << endl;
```

prints a newline.

We've finished level 1:

```text
1
```

But there are still nodes in the queue:

```cpp
if (!q.empty())
    q.push(NULL);
```

So we push another `NULL`:

```text
[ 2, 3, NULL ]
```

This `NULL` means:

> "After processing 2 and 3, the next level is finished."

---

### Step 3 — process `2`

```cpp
temp = q.front();  // 2
q.pop();
```

Queue:

```text
[ 3, NULL ]
```

Print:

```text
2
```

`2` has no children, so nothing is added.

---

### Step 4 — process `3`

```cpp
temp = q.front();  // 3
q.pop();
```

Queue:

```text
[ NULL ]
```

Print:

```text
3
```

Again, no children.

---

### Step 5 — process `NULL`

```cpp
temp = q.front();  // NULL
q.pop();
```

Queue:

```text
[ ]
```

`temp == NULL`, so:

```cpp
cout << endl;
```

prints another newline.

But now:

```cpp
q.empty()
```

is true, so we **don't push another NULL**.

Loop ends.

Final output:

```text
1
2 3
```

---

For the next methods:

`Just send both subtrees (left & right)`

`and print them`

`if at any point they reach the end (become null) => return`

# InOrder (LNR)

```cpp
void inorder(node* root) {
    //base case
    if(root == NULL) {
        return ;
    }

    inorder(root->left);
    cout << root-> data << " ";
    inorder(root->right);
}
```

# PreOrder (NLR)

```cpp
void preorder(node* root) {
    //base case
    if(root == NULL) {
        return ;
    }

    cout << root-> data << " ";
    preorder(root->left);
    preorder(root->right);

}
```

# PostOrder (LRN)

```cpp
void postorder(node* root) {
    //base case
    if(root == NULL) {
        return ;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root-> data << " ";

}
```
