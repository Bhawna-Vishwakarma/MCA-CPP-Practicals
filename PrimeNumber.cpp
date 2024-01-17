#include <iostream>
using namespace std;
int main()
{
    int num,count=0;
    bool temp = true; // 2nd method
    cout <<"Enter a number to check weather it is prime or not : "<<endl;
    cin>>num;
    if (num<=1){
        return 0;
    }
    else{
        for(int i=1; i<=num; i++){
            if(num % i == 0){
                count++;
            }
        }
        // 2nd method
        for (int i = 2; i < num/2; i++)
        {
            if(num % i == 0){
                temp = false;
            }
        }
        
    }   
    if(count==2){
        cout<<num<<" is a prime number."<<endl;
    }
    else{
        cout<<num<<" is not a prime number."<<endl;
    }
    // 2nd method
    if(temp){
        cout<<num<<" is a prime number by using 2nd method."<<endl;
    }
    else{
        cout<<num<<" is not a prime number by using 2nd method."<<endl;
    }
    return 0;
}