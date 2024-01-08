#include <iostream>
using namespace std;
class Complex {
private:
    double real;
    double img;
public:
    Complex(double r, double i){
        real = r;
        img = i;
    }
    // Overloading unary minus operator
    Complex operator - (){
        return Complex(-real, -img);
    }
    void display() const {
        cout << "Real: " << real << ", imaginary: " << img << endl;
    }
};

int main() {
    Complex c1(4.0, 3.0);
    Complex result = -c1;
    cout << "Original Complex Number:" << endl;
    c1.display();
    cout << "Complex Number after unary minus:" << endl;
    result.display();
    return 0;
}
