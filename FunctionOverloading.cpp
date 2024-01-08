#include <iostream>
using namespace std;
class MyClass{
public:
    // Function to add two integers
    int add(int a, int b){
        return a + b;
    }
    // Function to add three integers
    int add(int a, int b, int c){
        return a + b + c;
    }
    // Function to concatenate two strings
    string add(string str1, string str2){
        return str1 + str2;
    }
};

int main() {
    MyClass obj;
    int sum1 = obj.add(5, 7);
    int sum2 = obj.add(3, 8, 2);
    string result = obj.add("Hello, ", "world!");
    cout << "Sum of two integers: " << sum1 << endl;
    cout << "Sum of three integers: " << sum2 << endl;
    cout << "Concatenated strings: " << result << endl;
    return 0;
}
