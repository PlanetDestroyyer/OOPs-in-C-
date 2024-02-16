#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "Animal is eating." << endl;
    }
};

// Derived class with single inheritance
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog is barking." << endl;
    }
};

int main() {
    Dog dog;
    dog.eat();  // Accessing base class method
    dog.bark(); // Accessing derived class method
    return 0;
}
