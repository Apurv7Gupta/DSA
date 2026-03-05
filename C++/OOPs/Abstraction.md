
Abstraction means ==displaying only essential information and hiding the other details or implementation==. 

Example:

```cpp
class Animal {
public:
    string species;
    int age;
    int name;
    
    // Member functions
    void eat() {
        // eat something
    }
    void sleep() {
        // sleep for few hrs
    }
    void makeSound () {
        // make sound;
    }
};
```

When we call the **`**makeSound()**`** method, we don't need to know how the sound is produced internally, only that the method makes the animal sound.


We can implement it using ==Access Specifiers==

C++ has **three main access specifiers**:

- **public:** Members are accessible from anywhere in the program.
    
- **private:** Members can only be accessed from within the same class (or by friend functions).
    
- **protected:** Members can be accessed within the class and by derived classes, but not from outside. [ a protected member of the `Base` class and can be accessed from the `Derived` class, but not from outside the classes. Attempting to access `value` directly on a `Derived` object in `main` would result in a compilation error. ]

An ==abstract class== is only made for inheritance, it has no object, it only tells how the inherited class should be (it only exists to be a blueprint for other classes)

If a function uses =="virtual" keyword==, it becomes a ==virtual function==, it ==must be initialized to zero==, then its called a ==pure virtual function==, If a class has a pure virtual function, then it has become an abstract class

```cpp
#include <iostream>

using std::cout, std::cin, std::endl, std::string;

  

class Shape // abstract class

{

    // pure virtual function

  

    virtual void draw() = 0;

};

  

class Circle : public Shape

{

public:

    void draw() { cout << "Drawing a circle\n"; }

};

  
  

int main()

{

  

    // Shape S1;  //If we try to create an object of the abstract class, it will throw an error saying "Shape is an abstract class"

    Circle c1;

    c1.draw();

    return 0;

}
```