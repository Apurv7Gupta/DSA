
The word Polymorphism means having **many forms****. 

In simple words, we can define polymorphism as the ability of an entity to behave different in different scenarios.

For example, the same ****makeSound()**** method, the output will vary depending on the type of animal. So, this is an example of polymorphism where the makeSound() method behaves differently depending on the Animal type (Dog or Cat)


==The capability of a class to derive properties and characteristics from another class is called Inheritance==. 

- ****Sub Class****: The class that inherits properties from another class is called Sub class or Derived Class.
- ****Super Class****: The class whose properties are inherited by a sub-class is called Base Class or Superclass.

Inheritance supports the concept of **==reusability==**, i.e. when we want to create a new class and there is already a class that includes some of the code that we want, we can derive our new class from the existing class. By doing this, we are reusing the fields and methods of the existing class.

****Example****: Dog, Cat, Cow can be Derived Class of Animal Base Class. 

![Inheritance in C++ with Example](https://media.geeksforgeeks.org/wp-content/uploads/20220817100609/inheritance-660x454.png)

### Dynamic binding (Function Overriding) (Runtime Polymorphism)

It is when ==the function that gets called is decided at runtime,==  not at compile time.

It happens when:

- You call a ==virtual function== through a **base class pointer or reference**.
    
- The compiler sets up a vtable (virtual table) so at runtime it can jump to the correct overridden function in the actual object’s class.
    

```cpp

#include <iostream>
using namespace std;

class Animal {
public:
    virtual void speak() { // virtual → enables dynamic binding
        cout << "Animal sound" << endl;
    }
};

class Dog : public Animal {
public:
    void speak() override {
        cout << "Woof!" << endl;
    }
};

int main() {
    Animal* a = new Dog();
    a->speak(); // ✅ outputs "Woof!", decided at runtime
}



Without virtual, this would be **static binding** — Animal::speak() would run even if the object is actually a Dog.

- Without virtual: “I don’t care who you really are, I’m calling the base version.”
    
- With virtual: “Let me check who you actually are before calling the method.”

cpp
#include <iostream>
using namespace std;

class Animal {
public:
    virtual void speak() { cout << "Animal sound\n"; } // try removing 'virtual'
};

class Dog : public Animal {
public:
    void speak() override { cout << "Woof!\n"; }
};

int main() {
    Animal* a = new Dog();
    a->speak(); // With 'virtual' → Woof!  Without 'virtual' → Animal sound
}
```

```cpp
#include <iostream> using namespace std;

class Vehicle { 

public: virtual void start() { cout << "Vehicle starting\n"; } 

}; 

class Car : public Vehicle { 

public: void start() override { cout << "Car engine starting\n";}

};

 
class Bike : public Vehicle { 

public: void start() override { cout << "Bike ignition on\n";}
 
};
  
int main() {     
Vehicle* v;
Car c; Bike b;
v = &c; v->start();

// dynamic binding → Car::start()     v = &b; v->start();
// dynamic binding → Bike::start()

}

```