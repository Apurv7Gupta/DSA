```cpp
#include <iostream>
using namespace std;

class Animal {
public:
    void speak() { // base class method
        cout << "Animal sound" << endl;
    }
};

class Dog : public Animal { // Dog inherits from Animal
public:
    void bark() {
        cout << "Woof!" << endl;
    }
};

int main() {
    Dog d;
    d.speak(); // inherited from Animal
    d.bark();  // Dog's own method
}
```


Inheritance is the process by which ==one class acquires the properties of another class==.

The concept of inheritance provides the idea of reusability.

This means that ==we can add additional features to an existing class without modifying its code==.

This is possible by designing a new class ( a Derived Class ), which will have the features of the base class along with its own additional features.
