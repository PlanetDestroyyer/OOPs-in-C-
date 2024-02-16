#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "Animal is eating." << endl;
    }
};

// Intermediate class
class Cat : public Animal {
public:
    void meow() {
        cout << "Cat is meowing." << endl;
    }
};

// Derived class with multi-level inheritance
class Kitten : public Cat {
public:
    void purr() {
        cout << "Kitten is purring." << endl;
    }
};

int main() {
    Kitten kitten;
    kitten.eat();  // Accessing base class method
    kitten.meow(); // Accessing intermediate class method
    kitten.purr(); // Accessing derived class method
    return 0;
}
