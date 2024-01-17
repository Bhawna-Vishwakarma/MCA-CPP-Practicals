#include <iostream>
using namespace std;
// class Distance {
//     private:
//         int meter;
//         friend int addFive(Distance);
//         public:
//         Distance(){
//             meter = 0;
//         }
// };
// int addFive(Distance d) {
//     d.meter += 5;
//     return d.meter;
// }
// int main() {
//     Distance D;
//     cout << "Distance: " << addFive(D);
//     return 0;
// }

// 2nd example
class B;
class A{ 
    int x;
    public:
        void setData(int i)
        {
            x = i;
        }
    friend void min(A,B);
};
class B{   
    int y;
    public:
        void setData(int j)
        {
            y = j;
        }
    friend void min(A,B);
};
void min(A a,B b){
    if(a.x < b.y){
        cout<<"Member of Class A "<<a.x<<" is less than member of class B "<<b.y;
    }else{
        cout<<"Member of Class B "<<b.y<<" is less than member of class A "<<a.x;
    }
}
int main(){
    A a;
    B b;
    a.setData(30);
    b.setData(60);
    min(a,b);
}