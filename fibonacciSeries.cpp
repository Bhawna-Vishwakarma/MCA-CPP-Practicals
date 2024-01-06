#include<iostream>
using namespace std;
int main(){
    int total, num1=0, num2=1, next;
    cout<<"Enter how many numbers in the series-";
    cin>>total;
    cout<<"Fibonacci Series is -"<<endl;
    for (int i = 0; i < total; i++)
    {
        cout<<num1<<" ";
        next= num1 + num2;
        num1 = num2;
        num2 = next;
    }
    return 0;
}
