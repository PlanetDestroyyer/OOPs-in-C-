#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "Animal is eating." << endl;
    }
};

// Derived class with hierarchical inheritance
class Lion : public Animal {
public:
    void roar() {
        cout << "Lion is roaring." << endl;
    }
};

class Tiger : public Animal {
public:
    void growl() {
        cout << "Tiger is growling." << endl;
    }
};

int main() {
    Lion lion;
    Tiger tiger;

    lion.eat();  // Accessing base class method
    lion.roar(); // Accessing derived class method

    tiger.eat();  // Accessing base class method
    tiger.growl(); // Accessing derived class method

    return 0;
}
