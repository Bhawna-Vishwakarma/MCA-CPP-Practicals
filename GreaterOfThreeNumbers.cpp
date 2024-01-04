#include <iostream>
using namespace std;
int main()
{
    float num1, num2, num3;
    cout <<"Enter three Numbers to find Greatest - "<<endl;
    cin >>num1 >>num2 >>num3;

    if (num2 <= num1 && num1 >= num3 ) {
        cout << "The Greatest Number is 1st - "<< num1<<endl; 
    }
    else if (num1 <= num2 && num2 >= num3) {
        cout << "The Greatest Number is 2nd - "<< num2<<endl; 
    }
    else {
        cout << "The Greatest Number is 3rd - "<< num3<<endl; 
    }
    return 0;
}
// use of "if(b <= a >= c)" instead of "if(num2 <= num1 && num1 >= num3 )" this
// condition is wrong because <= and >= are binary operators it uses two operands for calulation and in that case compiler takes 3 operands in "if(b <= a >= c)" condition.