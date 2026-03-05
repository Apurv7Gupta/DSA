
- The building block of Object-Oriented programming in C++ It is a **user-defined data type**

- That act as a blueprint representing a group of objects which share some common properties and behaviors. 

- These properties are stored as data members, and the behavior is represented by member functions.


**For example**, consider the class of **Animals**. An **Animal** class could have common properties like ****name****, ****age****, and ****species**** as data members, and behaviors like ****eat****, ****sleep****, and ****makeSound**** as member functions. 

Each individual animal object (such as a dog, cat, or elephant) can be created from this blueprint, and each will have its own unique values for the properties (like the name and age), but all will share the same behaviors defined by the class (like eating, sleeping, and making sounds).

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