# Check if a number can be represented with a power of 2

## Formula

```cpp
(n > 0) && ((n & (n - 1)) == 0)
````

## Explanation

* `n > 0` => to avoid false positives

* `n - 1` =>  flips bits after the lowest set bit
* AND operation clears that bit
* If nothing remains → power of 2

---

## Example

```
n = 8 (1000)
n-1 = 7 (0111)

  1000
& 0111
  ----
  0000 → power of 2
```

---

## Non-example

```
n = 6 (110)
n-1 = 5 (101)

110
101
----
100 ≠ 0 → not power of 2
```

---

## Pattern
**Remove lowest set bit**

## Core Idea
A power of 2 has exactly **one set bit** in binary.

Examples:
```

1  -> 1
2  -> 10
4  -> 100
8  -> 1000

```

---

## Trick
```

n & (n - 1)

````

- Removes the **lowest set bit**
- If result becomes `0`, only one bit was set

---

## Notes

* O(1) time, no loops
* Fundamental bit manipulation trick

---

## Key Insight

> `n & (n - 1)` = removes lowest set bit

