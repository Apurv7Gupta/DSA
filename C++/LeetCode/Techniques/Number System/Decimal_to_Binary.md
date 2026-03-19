## Decimal to binary

### Common DSA method

```cpp
string DecToBin(int n) {
if (n == 0) return "0";                                     //Edge case

    string result = "";

    while (n > 0) {
        result = char((n & 1) + '0') + result;              // extract last bit and prepend
        n >>= 1;                                            // right shift (divide by 2)
    }

    return result;

}
```

### With STL

```cpp
string DecToBin(int n)
{
    if (n == 0) return "0";

    string result = "";

    while (n > 0)
    {
        result.push_back((n & 1) + '0');       // append instead of prepend
        n >>= 1;
    }

    reverse(result.begin(), result.end());        // reverse once at end

    return result;
}
```

---

## Line-by-line breakdown (Common)

```cpp
    if (n == 0) return "0";
```

Edge case — the loop below never runs when `n == 0`, so handle it explicitly.

```cpp
    string result = "";
```

Empty string that will accumulate binary digits.

---

```cpp
    while (n > 0) {
```

Keep looping until all bits have been extracted.

```cpp
        result = char((n & 1) + '0') + result;
```

- `n & 1` — bitwise AND with 1; isolates the **least significant bit** (gives `0` or `1` as int)
- `+ '0'` — converts `0`→`'0'`, `1`→`'1'` (ASCII trick)
- `char(...)` — casts it to a character
- prepended to `result` (not appended) so bits end up in **MSB→LSB order**

```cpp
        n >>= 1;
```

Right-shifts `n` by 1 bit — equivalent to integer division by 2. Discards the bit we just extracted.

```cpp
    }
    return result;
}
```

Returns the fully built binary string.

**The core idea:** each iteration peels off the rightmost bit via `& 1`, then shifts right. Since bits are extracted LSB-first but prepended, the final string is correctly ordered MSB-first.
