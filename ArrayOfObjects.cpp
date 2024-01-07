#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int marks, age;
    Student() {
        name = "";
        age = 0;
        marks = 0;
    }
    Student(string n, int a, int m){
        name = n;
        age = a;
        marks = m;
    }

    void show(){
        cout<<"Student Name: "<<name<<endl;
        cout<<"Student Age: "<<age<<endl;
        cout<<"Student Marks: "<<marks<<endl;
    }
};
int main()
{
    Student obj[3];
    obj[0] = Student("stu1",18,95);
    obj[1] = Student("stu2",18,90);
    obj[2] = Student("stu3",18,93);

    for (int i = 0; i < 3; i++)
    {
        obj[i].show();
        cout<<endl;
    }  
    return 0;
}