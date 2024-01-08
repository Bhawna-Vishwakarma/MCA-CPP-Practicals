#include <iostream>
using namespace std;

class Base {
public:
    void displayBase() {
        cout << "This is the Base class." << endl;
    }
};

// Intermediate class inheriting from Base class
class Intermediate : public Base {
public:
    void displayIntermediate() {
        cout << "This is the Intermediate class." << endl;
    }
};

// Derived class inheriting from Intermediate class
class Derived : public Intermediate {
public:
    void displayDerived() {
        cout << "This is the Derived class." << endl;
    }
};

int main() {
    Derived derivedObj;
    derivedObj.displayBase();           // Accessing the base class function
    derivedObj.displayIntermediate();   // Accessing the intermediate class function
    derivedObj.displayDerived();        // Accessing the derived class function
    return 0;
}
