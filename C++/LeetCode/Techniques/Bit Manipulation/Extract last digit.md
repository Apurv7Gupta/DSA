## Extract last digit

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
