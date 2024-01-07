#include <iostream>
using namespace std;
class Example {
    private:
        static int count;

    public:
        Example() {
            count++;
        }

        static void showCount() {
            std::cout << "Count of objects: " << count << std::endl;
        }
};
// Initialize static data member outside the class
int Example::count = 0;
int main() {
    Example obj1;
    Example obj2;
    Example obj3;
    Example::showCount();
    return 0;
}
