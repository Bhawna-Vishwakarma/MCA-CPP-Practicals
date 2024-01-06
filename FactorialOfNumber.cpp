#include<iostream>
using namespace std;

int main()
{
    int num, fact=1;
    cout<<"Enter a number to find facorial :"<<endl;
    cin>>num;
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    cout<<"Factorial of a number is: "<<fact;
    return 0;
}
