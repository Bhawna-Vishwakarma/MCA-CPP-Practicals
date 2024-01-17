#include <iostream>
using namespace std;
int main()
{
    string str, rev="";
    bool result;
    cout<<"Enter a string to check weather it's palindrome or not -"<<endl;
    cin>>str;
        
    for (int i = str.length()-1; i >= 0; i--)
    {
        rev += str[i];
    }
    
    if(str == rev){
        cout<<"String is Palindrome."<<endl;
    }else{
        cout<<"String is't Palindrome."<<endl;
    }
    return 0;
}