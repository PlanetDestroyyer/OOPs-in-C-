#include <iostream>
using namespace std;

class Calculator {
public:
    // Function overloading
    int add(int a, int b) {
        return a + b;
    }

    // Function overloading
    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    Calculator calc;
    cout << "Integer sum: " << calc.add(5, 3) << endl;       // Calls int version of add()
    cout << "Double sum: " << calc.add(3.5, 2.5) << endl;    // Calls double version of add()
    return 0;
}
