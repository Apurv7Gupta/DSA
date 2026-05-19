# '\*' and '&'

## **& = "address of" operator**

```cpp
int x = 10;
cout << &x;
```

`x = value`

`&x = memory address of x`

**It’s used with pointers:**

```cpp
int x = 10;
int *ptr = &x;
```

`&x gets the address of x`

`ptr = address of x`

`ptr* = 10`

**& is also used for references:**

```cpp
int x = 10;
int& ref = x;
```

Here ref becomes another name for x (an alias), not an address.

## **\* = dereferencing operator**

- pointer

  A pointer is a variable that stores the memory address of another variable.

  `int* p` or `int *p` are single pointers, `int *p = &a` means `p is a pointer to a`

  `int** ptr` or `int **ptr` are **double pointers**

- data type

  A pointer moves in steps based on the size of the type it points to (not raw bytes you manually control).

  an `int` takes 4 bytes of storage, so:

  ```cpp
  int a = 5;        // stored at: 100
  int *ptr = &a;
  ```

  If ptr stores the address of an int, then:

  ptr points to a

  ptr++ moves to the next int location

  the jump size is sizeof(int) (commonly 4 bytes, but not guaranteed)

  **⚠️ Important:**

  `cout << ++ptr;`

  This does not safely mean “+4 bytes (104)” in all systems
  Pointer arithmetic only makes sense within arrays or allocated blocks

  Example:

  ```cpp
  int arr[5] = {1,2,3,4,5};
  int *p = arr;
  cout << *(++p); // => 2
  ```

  Correct mental model:

  `ptr++ → move to next int, not next byte`

  similiarly, a `double` takes 8 bytes

- array
  - array name:

    An array name is the memory address of its 0th element in most expressions

    although they cannot really act as pointers (`arr++` gives error)

    so:

    ```
    arr == &arr[0] (in expressions)
    but arr++ is invalid
    ```

  - array indices

  - reverse array notation

    `arr[i] == *(arr + i)`

    `i[arr] = *(arr + i)`

    both are valid, and `*(arr + i)` is what happens under the hood in arr[i]

- double pointer

  `int **ptr = &p means ptr stores the address of p`

  ```cpp
  int a = 5;
  int *p = &a;
  int **ptr = &p;
  ```

  ```
  Memory Model:

  a      = 5
  &p     = address of p
  p      = address of a
  ptr    = address of p
  *ptr   = p (address of a)
  **ptr  = *p (5)
  ```
