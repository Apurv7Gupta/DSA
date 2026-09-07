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

---

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
