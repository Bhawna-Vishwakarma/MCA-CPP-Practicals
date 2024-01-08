#include <iostream>
using namespace std;
class InlineDemo{
    private:
        int data;

    public:
        // Inline member function to set the data
        inline void setData(int value){
            data = value;
        }
        // Inline member function to get the data
        inline int getData(){
            return data;
        }
};
int main() {
    InlineDemo obj;
    obj.setData(42);
    cout<<"Data set using inline member function: "<<obj.getData()<<endl;
    return 0;
}
