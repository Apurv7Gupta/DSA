Same idea exists for **any base**. `%` extracts the last unit of that base, `/=` removes it.

---

### Binary (base 2)

Used for **bits**.

| Operation | Purpose       |
| --------- | ------------- |
| `n & 1`   | read last bit |
| `n >>= 1` | drop last bit |

Example:

```cpp
int bit = n & 1;
n >>= 1;
```

---

### Decimal (base 10)

| Operation | Purpose         |
| --------- | --------------- |
| `n % 10`  | read last digit |
| `n /= 10` | drop last digit |

---

### Base 16 (hex)

| Operation | Purpose             |
| --------- | ------------------- |
| `n % 16`  | read last hex digit |
| `n /= 16` | drop last hex digit |

Example:

```cpp
int digit = n % 16;
n /= 16;
```

---

### General rule

For **any base `b`**:

| Operation | Meaning                       |
| --------- | ----------------------------- |
| `n % b`   | get last digit in base `b`    |
| `n /= b`  | remove last digit in base `b` |

---

### Bit trick equivalent (faster for base 2)

| Operation   | Purpose                                             |
| ----------- | --------------------------------------------------- |
| `n & 1`     | last bit                                            |
| `n >> 1`    | drop bit                                            |
| `n & (n-1)` | remove lowest (rightmost)  set bit (Kernighan Algo) |
## Kernighan Algo

Subtracting `1` from a number flips bits starting from the **rightmost `1`**.

Example:

n     = 1011000  
n - 1 = 1010111

Pattern:

xxxxx1000  
xxxxx0111

- the **rightmost `1` becomes `0`**
    
- everything to its right becomes `1`
    

Now apply `&`:

   1011000  
&  1010111  

=>   1010000

The **lowest `1` disappeared**.


These patterns show up everywhere in problems like:

- digit reversal
    
- palindrome numbers
    
- bit manipulation
    
- base conversions.
