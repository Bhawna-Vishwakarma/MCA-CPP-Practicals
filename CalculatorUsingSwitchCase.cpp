#include <iostream>
using namespace std;
int main()
{
    int num1, num2, result;
    char choice; 
    cout <<"Choose what you want to perfome +,-,*,/  "<<endl;
    cin >>choice;

    cout << "Enter two numbers :"<<endl;
    cin >>num1 >>num2;
    switch(choice)
    {
        case '+':
            result = num1 + num2;
            break;
        case '-': 
            result = num1 - num2;
            break;
        case '*': 
            result = num1 * num2;
            break;
        case '/': 
            result = num1 / num2;
            break;
        default:
            cout<<"Invalid input";
    }
    cout <<"Result is: "<<result<<endl;
    return 0;
}