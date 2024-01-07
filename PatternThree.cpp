#include <iostream>
using namespace std;
int main() {
    for (int i = 1; i <= 3; i++) {
        if(i==3){
            cout<<endl;
        }
        for (int j = 1; j <= i; j++) {
            cout <<i<< " ";
        }  
              
    }
    return 0;
}
