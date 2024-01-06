#include <iostream>
using namespace std;
int main()
{
    string str;
    bool result;
    cout<<"Enter a string to check weather it's palindrome or not -"<<endl;
    cin>>str;
        
    for (int i = 0, j = str.length()-1; i <= j; i++, j--)
    {
        cout<<str[i]<<" "<<str[j]<<endl;
        if(str[i] == str[j]){
            result= true;
        }else{
            result = false;
        }
    }
    if(result){
        cout<<"String is Palindrome."<<endl;
    }else{
        cout<<"String is't Palindrome."<<endl;
    }
    return 0;
}