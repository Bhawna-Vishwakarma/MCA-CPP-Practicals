#include <iostream>
using namespace std;
class Base {
public:
    void displayBase() {
        cout << "This is the Base class." << endl;
    }
};
// Derived class inheriting from Base class
class Derived : public Base {
public:
    void displayDerived() {
        cout << "This is the Derived class." << endl;
    }
};

int main() {
    Derived derivedObj;
    derivedObj.displayBase();    // Accessing the base class function
    derivedObj.displayDerived(); // Accessing the derived class function
    return 0;
}
