#include <iostream>
using namespace std;
int main(){

    float num1, num2, num3, avg=0;
    cout <<"Enter three numbers to find Average : " <<endl;
    cin >>num1 >>num2 >>num3;
    avg = (num1 + num2 + num3) / 3;
    cout <<"Average of three numbers is : " <<avg <<endl;
    return 0;
}