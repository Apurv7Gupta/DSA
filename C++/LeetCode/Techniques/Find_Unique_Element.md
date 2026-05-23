```cpp
vector<int> FindUnique(vector<int> &arr)
{
    unordered_set<int> seen;
    vector<int> ans;

    for (int i : arr)
    {
        if (seen.insert(i).second)
        {
            ans.push_back(i);
        }
    }

    return ans;
}
```

Store duplicate elements from a vector while keeping the original order of appearance.

#### 1. Create a set to track visited elements

```cpp
unordered_set<int> seen;
```

`unordered_set` stores only unique values.

---

#### 2. Create result vector

```cpp
vector<int> ans;
```

---

#### 3. Loop through the array

```cpp
for (int i : arr)
```

Iterates through every element in the vector.

---

#### 4. Insert into set and check result

```cpp
if (seen.insert(i).second)
```

`seen.insert(i)` returns:

```cpp
pair<iterator, bool>
```

The `.second` part is:

- `true` → element was inserted successfully (first occurrence)
- `false` → element already existed (duplicate)

So only first-time elements enter `ans`.

---

#### 5. Store unique element

```cpp
ans.push_back(i);
```

Adds the unique element to the answer vector.

---

### Example

Input:

```txt
[1, 2, 2, 3, 4, 4, 5]
```

Process:

```txt
1 -> new -> add
2 -> new -> add
2 -> duplicate -> skip
3 -> new -> add
4 -> new -> add
4 -> duplicate -> skip
5 -> new -> add
```

Output:

```txt
[1, 2, 3, 4, 5]
```

---

### Time Complexity

```txt
O(n)
```

Because `unordered_set` insertion is average O(1).

---

### Space Complexity

```txt
O(n)
```

For storing elements in the set and answer vector.
