#include <iostream>
using namespace std;

class Base {
public:
    void displayBase() {
        cout << "This is the Base class." << endl;
    }
};

// Derived class 1 inheriting from Base class
class Derived1 : public Base {
public:
    void displayDerived1() {
        cout << "This is the Derived1 class." << endl;
    }
};

// Derived class 2 inheriting from Base class
class Derived2 : public Base {
public:
    void displayDerived2() {
        cout << "This is the Derived2 class." << endl;
    }
};

// Final class inheriting from both Derived1 and Derived2
class Final : public Derived1, public Derived2 {
public:
    void displayFinal() {
        cout << "This is the Final class." << endl;
    }
};

int main() {
    Final finalObj;
    finalObj.Derived1::displayBase();       // Accessing the base class function
    finalObj.displayDerived1();   // Accessing the derived1 class function
    finalObj.displayDerived2();   // Accessing the derived2 class function
    finalObj.displayFinal();      // Accessing the final class function
    return 0;
}
