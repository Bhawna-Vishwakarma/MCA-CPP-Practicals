#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number to find whether it's even or odd.."<<endl;
    cin>>num;

    if(num % 2 ==0){
        cout<<"Number is Even"<<endl;
    }else{
        cout<<"Number is Odd"<<endl;
    }
    return 0;
}