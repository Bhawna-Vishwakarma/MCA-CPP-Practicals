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

int main() {
    Derived1 derivedObj1;
    Derived2 derivedObj2;
    derivedObj1.displayBase();       // Accessing the base class function from Derived1
    derivedObj1.displayDerived1();   // Accessing the derived1 class function
    derivedObj2.displayBase();       // Accessing the base class function from Derived2
    derivedObj2.displayDerived2();   // Accessing the derived2 class function
    return 0;
}
