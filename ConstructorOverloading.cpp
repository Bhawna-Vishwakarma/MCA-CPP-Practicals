#include <iostream>
using namespace std;
class MyClass {
    private:
        int value;
    public:
        // Default constructor
        MyClass(){
            value=0;
        }
        // Parameterized constructor
        MyClass(int val){
            value= val;
        }
        // Constructor with two parameters
        MyClass(int val1, int val2){
            value = val1 + val2;
        }

        int getValue(){
            return value;
        }
};

int main() {
    MyClass obj1;            // Calls the default constructor
    MyClass obj2(42);        // Calls the parameterized constructor
    MyClass obj3(10, 20);    // Calls the constructor with two parameters

    cout << "Value of obj1: " << obj1.getValue() << endl;
    cout << "Value of obj2: " << obj2.getValue() << endl;
    cout << "Value of obj3: " << obj3.getValue() << endl;
    return 0;
}
