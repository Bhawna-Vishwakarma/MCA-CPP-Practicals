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
// Not required total variable for less numbers of average calculation.
// But if you have more than 3 numbers to calculate average then use of total variable makes your code in readable formate.