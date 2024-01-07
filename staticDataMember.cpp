#include <iostream>
using namespace std;
class Example {
public:
    static int staticData;
    Example() {
        staticData++;
    }
};
int Example::staticData = 0;

int main() {
    Example obj1, obj2, obj3;
    cout <<"Static Data: "<<Example::staticData <<endl;
    return 0;
}
