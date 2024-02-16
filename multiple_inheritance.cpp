#include <iostream>
using namespace std;

// Base class
class Person {
public:
    void breathe() {
        cout << "Person is breathing." << endl;
    }
};

class Employee {
public:
    void work() {
        cout << "Employee is working." << endl;
    }
};

// Derived class with multiple inheritance
class Teacher : public Person, public Employee {
public:
    void teach() {
        cout << "Teacher is teaching." << endl;
    }
};

int main() {
    Teacher teacher;
    teacher.breathe(); // Accessing first base class method
    teacher.work();    // Accessing second base class method
    teacher.teach();   // Accessing derived class method
    return 0;
}
