## frequency (alphabets)

```cpp id="7u2kq1"
vector<int> freq(26, 0);

for (char c : s) {
    if ('a' <= c && c <= 'z')
        freq[c - 'a']++;

    if ('A' <= c && c <= 'Z')
        freq[c - 'A']++;
}
```

- `freq[0]` → `'a'` or `'A'`
- `freq[25]` → `'z'` or `'Z'`
- Case-sensitive counting (lower + upper both handled separately but stored in same array)
- Mapping: `char → index = c - base_char`

---

## frequency (digits from string)

```cpp id="x9l2fp"
vector<int> freq(10, 0);

for (char c : s) {
    if ('0' <= c && c <= '9')
        freq[c - '0']++;
}
```

- `freq[0]` → `'0'`
- `freq[9]` → `'9'`
- Mapping: `c - '0'` converts char → digit index

---

## frequency (digits from integers)

```cpp id="m3v8qn"
vector<int> freq(10, 0);

for (int num : nums) {
    if (num == 0) freq[0]++;

    while (num > 0) {
        freq[num % 10]++;
        num /= 10;
    }
}
```

- `% 10` → last digit
- `/= 10` → remove last digit
- Special case: `0` skipped by loop → handled manually
- No string conversion → faster + cleaner

---

### Core idea

- Alphabet → size **26**, base `'a'` / `'A'`
- Digits → size **10**, base `'0'`
- Indexing trick = **ASCII offset math**
