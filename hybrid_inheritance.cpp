#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "Animal is eating." << endl;
    }
};

// Intermediate classes
class Bird : virtual public Animal {
public:
    void fly() {
        cout << "Bird is flying." << endl;
    }
};

class Airplane : virtual public Animal {
public:
    void fly() {
        cout << "Airplane is flying." << endl;
    }
};

// Derived class with hybrid inheritance
class FlyingBird : public Bird, public Airplane {
public:
    void chirp() {
        cout << "FlyingBird is chirping." << endl;
    }
};

int main() {
    FlyingBird flyingBird;
    
    
    flyingBird.eat();   // Accessing base class method
    flyingBird.Bird::fly();   // Specify Bird's fly() method
    flyingBird.Airplane::fly(); // Specify Airplane's fly() method
    flyingBird.chirp(); // Accessing derived class method
    
    
    return 0;
}
