### Class & constructor

```cpp
class node
{
public:
int data;
node *left;
node *right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }

};
```

### Build a tree

```cpp
node *buildTree(node *root)
{
int data = 0;
cout << "data: ";
cin >> data;

    // backtrack
    if (data == -1)
        return NULL;

    root = new node(data);

    cout << "right of " << data << ": ";
    root->right = buildTree(root->right);

    cout << "left of " << data << ": ";
    root->left = buildTree(root->left);

    return root;

}
```

### Printing a tree

```cpp
void levelOrderTraversal(node _root)
{
queue<node*> q;
q.push(root);
q.push(NULL);
cout << endl;

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

}
```

```cpp
int main()
{

    node *root = NULL;

    root = buildTree(root);
    levelOrderTraversal(root);

    cout << "end" << endl;
    system("pause");

    return 0;

}
```
