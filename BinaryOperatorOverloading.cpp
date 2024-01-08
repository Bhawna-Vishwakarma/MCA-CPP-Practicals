#include <iostream>
using namespace std;
class Complex{
    private :
        int real;
        int img;
    public:
        Complex(){
            real = 0;
            img= 0;
        }
        Complex(int r,int i){
            real = r;
            img= i;
        }
        Complex operator + (Complex &obj){
            Complex temp;
            temp.real = real + obj.real;
            temp.img = img + obj.img;
            return temp;
        }

        void print(){
            cout<<real<<" + "<<img<<"Z"<<endl;
        }
};
int main(){
    int r1, i1, r2, i2;
    cout<<"Enter real & imagenary of complex  no- "<<endl;
    cin>>r1>>i1;
    cout<<"Enter real & imagenary of complex  no- "<<endl;
    cin>>r2>>i2;
    Complex cn1(r1,i1), cn2(r2,i2);
    Complex cn3 = cn1 + cn2; //overloading binary Operator
    cout<<"Addition of complex no - "<<endl;
    cn3.print(); 
    return 0;
}