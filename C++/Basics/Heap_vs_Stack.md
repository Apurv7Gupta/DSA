### Stack:

Small pool of memory, which is known at compile time, called `Static Allocation`

Bad practice:

```cpp
int n;
cin>>n;
int arr[n]
```

Because your runtime allocated size might be more than the stack gives, also MSVC gives error on this

### Heap:

Large pool of memory allocated at runtime, called `Dynamic Allocation`

using heap memory requires `new` keyword

> but in modern C++, things like `vector<int> x(5);` use heap memory underneath, where you also don't need to manually use `delete`

```cpp
int *x = new int[5];
```

here you get 28 bytes:

`pointer: 8 bytes (statically allocated)`

`array: 5*4 = 20 bytes (Dynamically allocated)`

`TOTAL: 20+8 = 28 bytes`

Runtime-sized arrays in standard C++ should use dynamic allocation:

```cpp
int n;
cin>>n
int *x = new int[n];
```

after using dynamic allocation, deleting the memory manually is crucial, using `delete` keyword

```cpp
delete []arrayName      // if you created array
delete variableName      // if you created int/char/bool/string/etc.
```
