### Fixed Window

when window size is fixed (k).

```cpp
for (int r = 0; r < n; r++) {
    add(nums[r]);

    if (r >= k)
        remove(nums[r - k]);

    if (r >= k - 1)
        answer();
}
```

### Variable Window

when looking for the longest or shortest subarray/substring satisfying a condition.

```cpp
int l = 0;

for (int r = 0; r < n; r++) {
add(nums[r]);

    while (window_invalid()) {
        remove(nums[l]);
        l++;
    }

    update_answer();

}
```

### At Most K Distinct

```cpp
unordered_map<int,int> freq;
for (int r = 0; r < n; r++) {
freq[nums[r]]++;

    while (freq.size() > k) {
        if (--freq[nums[l]] == 0)
            freq.erase(nums[l]);
        l++;
    }

    ans = max(ans, r - l + 1);

}
```

### Minimum Window

```cpp
    while (formed == required) {
    update_answer();

        remove(left);

        left++;

}
```
