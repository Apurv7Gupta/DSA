// Pattern 1 — Opposite ends (two-sum on sorted array)
int left = 0, right = n - 1;
while (left < right) {
    int sum = arr[left] + arr[right];
    if (sum == target) { /* found */ return {left, right}; }
    else if (sum < target) ++left;   // need larger sum
    else                  --right;   // need smaller sum
}

// Pattern 2 — Fast & slow (cycle detection, Floyd's algorithm)
auto slow = head, fast = head;
while (fast && fast->next) {
    slow = slow->next;
    fast = fast->next->next;
    if (slow == fast) { /* cycle detected */ break; }
}

// Pattern 3 — Sliding window (longest subarray with constraint)
int left = 0, ans = 0;
unordered_map<char,int> freq;
for (int right = 0; right < n; ++right) {
    freq[s[right]]++;                        // expand window
    while (/* window invalid */) {
        freq[s[left]]--;                     // shrink window
        if (freq[s[left]] == 0) freq.erase(s[left]);
        ++left;
    }
    ans = max(ans, right - left + 1);        // update answer
}
