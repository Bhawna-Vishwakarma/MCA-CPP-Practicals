#include <iostream>
using namespace std;
class Wall{
    private:
        float height;
        float width;
    public:
        Wall(float h, float w){
            height = h;
            width= w;
        }
        // copy construtor
        Wall(Wall &obj){
            height = obj.height;
            width = obj.width;
        }
        float area(){
            return (height * width);
        }
         
};
int main()
{
    Wall w1(7.5,10);
    Wall w2 = w1;
    cout<<"Area of Wall w1 is -"<<w1.area()<<endl;
    cout<<"Area of Wall w2 is -"<<w2.area()<<endl;
    return 0;
}
