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

`*ptr = 10`

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

# Types of pointers:

## nullptr

`nullptr` is the modern C++ null pointer literal.

It means:

```text
"this pointer points to nothing"
```

Example:

```cpp
int* p = nullptr;
```

`p` is valid as a pointer variable, but it doesn't point anywhere.

---

Before C++11, people used:

```cpp
int* p = NULL;
```

or:

```cpp
int* p = 0;
```

Problem:

- `NULL` is basically just integer `0`
- causes ambiguity in overloads

Example:

```cpp
void func(int);
void func(int*);

func(NULL); // may call func(int)
```

With `nullptr`:

```cpp
func(nullptr); // correctly calls func(int*)
```

---

Common usage:

```cpp
int* p = nullptr;

if (p == nullptr) {
    cout << "No address assigned";
}
```

---

Very important after delete:

```cpp
delete p;
p = nullptr;
```

Prevents dangling pointer accidents.

---

Type of `nullptr`:

```cpp
std::nullptr_t
```

Not an integer.

---

Modern C++ rule:

Use:

```cpp
nullptr
```

Never:

```cpp
NULL
```

unless stuck in ancient C/C++ codebases.

## Dangling Pointer

A pointer that points to memory that is already freed or invalid.

Example:

```cpp
int* p = new int(5);

delete p; // memory freed

cout << *p; // dangling pointer usage -> undefined behavior
```

`p` still stores the old address, but that memory is gone.

Also happens with local variables:

```cpp
int* func() {
    int x = 10;
    return &x; // BAD
}
```

`x` dies after function ends, so returned pointer dangles.

Fix:

```cpp
delete p;
p = nullptr;
```

## Wild Pointer

A pointer that was never initialized.

Example:

```cpp
int* p; // wild pointer

cout << *p; // garbage address -> undefined behavior
```

`p` contains random garbage memory address.

Fix:

```cpp
int* p = nullptr;
```

## Void Pointer

A `void*` is a generic pointer.
It can store the address of **any data type**.

Example:

```cpp
int x = 10;

void* p = &x;
```

`p` now holds address of an `int`.

---

But `void*` has no type information.

So this is illegal:

```cpp
cout << *p; // ERROR
```

Compiler doesn't know whether it's:

- `int`
- `float`
- `char`
- custom class
- etc.

You must cast it back first.

Example:

```cpp
int x = 10;

void* p = &x;

cout << *(int*)p;
```

---

Another example:

```cpp
float y = 3.14f;

void* p = &y;

cout << *(float*)p;
```

---

Why it exists:

- generic memory handling
- low-level APIs
- C compatibility
- allocators
- operating systems stuff

Example:

- `malloc()` returns `void*`

```cpp
int* arr = (int*)malloc(5 * sizeof(int));
```

---

Important:
`void*` cannot do pointer arithmetic safely.

Bad:

```cpp
void* p;
p++; // illegal
```

because compiler doesn't know object size.

Modern C++ rarely uses raw `void*` directly unless doing low-level systems/programming/runtime stuff.

## const Pointer

(not a pointer type, just for clearing some confusion)

The placement of const changes everything.

This is a common interview question:

```c++
const int* p; // Pointer to CONSTANT int (can't change the value 10)
int* const p; // CONSTANT pointer (can't change the address stored)
const int* const p; // Constant pointer to a constant int (can't change either)
```

## Smart Pointers (The Modern Way)

In modern industry code, we almost never use new and delete. We use Smart Pointers to prevent Dangling Pointers.

| Type              | Use Case                                                              |
| ----------------- | --------------------------------------------------------------------- |
| `std::unique_ptr` | Exclusive ownership (automatically deletes when done).                |
| `std::shared_ptr` | Multiple owners (deletes when the last owner is gone).                |
| `std::weak_ptr`   | Points to a `shared_ptr` but doesn't keep it alive (prevents cycles). |

# Address typecasting

Address typecasting means converting one pointer type into another pointer type.

Example:

```cpp
int x = 65;

int* p = &x;
char* c = (char*)p;
```

Here:

- `p` stores address of `x`
- address is typecasted from `int*` → `char*`

---

Why this matters:

Different pointer types interpret memory differently.

Example:

```cpp
int x = 65;

char* c = (char*)&x;

cout << *c;
```

Output usually:

```text
A
```

Because:

- ASCII 65 = `'A'`
- `char*` reads 1 byte
- `int*` reads 4 bytes (usually)

---

Another example:

```cpp
float f = 5.5;

void* vp = &f;

float* fp = (float*)vp;

cout << *fp;
```

`void*` was converted back into `float*`.

---

Modern C++ style uses:

```cpp
float* fp = static_cast<float*>(vp);
```

instead of C-style casts:

```cpp
(float*)vp
```

because it's safer and clearer.

---

Main uses:

- converting `void*`
- low-level memory access
- binary/file parsing
- hardware/system programming
- legacy C APIs

Bad casts can easily cause undefined behavior if you interpret memory as the wrong type.

the three "Nevers" of References:
Never Null: A reference must always be bound to an object.
Never Uninitialized: int& ref; is a compiler error.
Never Rebound: Once ref points to x, you cannot make it point to y.

> for practice: https://www.naukri.com/code360/guided-paths/pointers
