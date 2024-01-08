#include <iostream>
using namespace std;
class Myclass{
    public:
        Myclass(){
            cout << "Constructor called." <<endl;
        }

        ~Myclass(){
            cout << "Destructor called." <<endl;
        }
};
int main() {
    Myclass obj;
    return 0;
}
// Constructor is called when the object is created
// Destructor is called when the object goes out of scope (at the end of the program)
