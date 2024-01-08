#include <iostream>
using namespace std;

class Base1 {
public:
    void displayBase1() {
        cout << "This is Base1 class." << endl;
    }
};

class Base2 {
public:
    void displayBase2() {
        cout << "This is Base2 class." << endl;
    }
};

// Derived class inheriting from Base1 and Base2
class Derived : public Base1, public Base2 {
public:
    void displayDerived() {
        cout << "This is the Derived class." << endl;
    }
};

int main() {
    Derived derivedObj;
    derivedObj.displayBase1(); // Accessing the first base class function
    derivedObj.displayBase2(); // Accessing the second base class function
    derivedObj.displayDerived(); // Accessing the derived class function
    return 0;
}
