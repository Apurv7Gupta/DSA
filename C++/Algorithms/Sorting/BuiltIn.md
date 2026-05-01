### Ascending:

```cpp
sort(arr.begin(), arr.end());
```

### Descending:

```cpp
sort(arr.begin(), arr.end(), greater<int>());
```

### Custom comparator

```cpp
sort(nums.begin(), nums.end(), [](int a, int b) {
    return a > b;
});
```

#### Ascending:

`return a < b;`

#### Descending:

`return a > b;`

---

### Partial sort

Sort only part of array.

```cpp
partial_sort(nums.begin(), nums.begin()+3, nums.end());
```

### nth_element

Gets kth largest/smallest fast.

```cpp
nth_element(nums.begin(), nums.begin()+k, nums.end());
```

### Stable sort

Preserves relative order of equal elements.

```cpp
stable_sort(nums.begin(), nums.end());
```
