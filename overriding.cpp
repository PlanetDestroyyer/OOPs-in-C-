#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    // Virtual function
    virtual void makeSound() {
        cout << "Animal makes a generic sound." << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    // Override virtual function
    void makeSound() override {
        cout << "Dog barks: Woof! Woof!" << endl;
    }
};

// Derived class
class Cat : public Animal {
public:
    // Override virtual function
    void makeSound() override {
        cout << "Cat meows: Meow! Meow!" << endl;
    }
};

int main() {
    Animal* animal1 = new Dog();
    Animal* animal2 = new Cat();

    animal1->makeSound(); // Calls Dog's makeSound() method
    animal2->makeSound(); // Calls Cat's makeSound() method

    delete animal1;
    delete animal2;

    return 0;
}
