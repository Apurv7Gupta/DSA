```cpp
#include <unordered_set>

bool containsDuplicate(vector<int>& nums) {

    unordered_set<int> seen;

    bool duplicate = false;

    for (int i : nums) {

        if (seen.count(i)){
            duplicate = true;
        }else{
            seen.insert(i);
        }
    }

    return duplicate;
}
```

Check if a vector contains any duplicate elements.

#### 1. Create a flag and a set to track visited elements

```cpp
bool duplicate = false;
unordered_set<int> seen;
```

`unordered_set` stores only unique values.

---

#### 2. Iterate through every element in the vector.

```cpp
for (int i : nums)
```

---

#### 3. Check if element already exists

```cpp
if (seen.count(i))
```

`seen.count(i)` returns:

- `1` → element already exists (duplicate found)
- `0` → element not seen yet

---

#### 4. Mark duplicate or insert

```cpp
if (seen.count(i)) {
    duplicate = true;
} else {
    seen.insert(i);
}
```

If already in set → set flag to `true`. Otherwise → insert into set.

---

#### 5. Returns `true` if any duplicate was found, `false` otherwise.

```cpp
return duplicate;
```

---

### Example

Input:

```txt
[1, 2, 2, 3, 4, 4, 5]
```

Process:

```txt
1 -> not seen -> insert
2 -> not seen -> insert
2 -> seen -> duplicate = true
3 -> not seen -> insert
4 -> not seen -> insert
4 -> seen -> duplicate = true
5 -> not seen -> insert
```

Output:

```txt
true
```

---

### Time Complexity

```txt
O(n)
```

Because `unordered_set` lookup and insertion are average O(1).

---

### Space Complexity

```txt
O(n)
```

For storing elements in the set.
