#include <iostream>
using namespace std;
int add(){
    int num1, num2, sum;
    cout << "Enter two numbers :"<<endl;
    cin >>num1 >>num2;
    sum = num1 + num2;
    cout <<"Addition is: "<<sum<<endl;
}
int sub(){
    int num1, num2, sum;
    cout << "Enter two numbers :"<<endl;
    cin >>num1 >>num2;
    sum = num1 - num2;
    cout <<"Subtraction is: "<<sum<<endl;
}
int mul(){
    int num1, num2, sum;
    cout << "Enter two numbers :"<<endl;
    cin >>num1 >>num2;
    sum = num1 * num2;
    cout <<"Multiplication is: "<<sum<<endl;
}
int div(){
    int num1, num2, sum;
    cout << "Enter two numbers :"<<endl;
    cin >>num1 >>num2;
    sum = num1 / num2;
    cout <<"Division is: "<<sum<<endl;
}
int main()
{
    int choice; 
    cout <<"Choose what you want to perfome - "<<endl;
    cout <<"Enter 1 for Addition"<<endl;
    cout <<"Enter 2 for Subtraction"<<endl;
    cout <<"Enter 3 for Multiplication"<<endl;
    cout <<"Enter 4 for Division"<<endl;
    cout <<"Enter 0 for exit"<<endl;
    cin >>choice;

    switch(choice)
    {
        case 0: 
            exit(0);
        case 1:
            add();
            break;
        case 2: 
            sub();
            break;
        case 3: 
            mul();
            break;
        case 4: 
            div();
            break;
        default:
            cout<<"Invalid input";
    }
    return 0;
}