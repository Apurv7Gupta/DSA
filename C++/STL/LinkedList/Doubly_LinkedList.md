```cpp
#include <forward_list>

int main() {
    list<int> l;

    l.push_back(10);
    l.push_back(20);
    l.push_back(30);

    l.pop_front();

    for (int x : l) {
        cout << x << " ";
    }
}
```

std::list is a doubly linked list already implemented by STL devs.
