#include <iostream>

using namespace std;


class Student{
public:
    int name;
    int age;

    //构造函数----普通方式初始化对象成员
    // Student(int n, int a){
    //     name = n;
    //     age = a;
    // }

    //构造函数----采用 初始化列表方式 初始化对象成员
    Student(int name, int age):name(name), age(age){
    }
};


int main(int argc, char *argv[]) 
{    
    // 普通方式初始化对象成员
    // Student xiaoming = Student(12, 13);
    // cout << "name: " << xiaoming.name << "  age: " << xiaoming.age << endl; 
    // Student *xiaohong = new Student(14, 15);
    // cout << "name: " << xiaohong->name << "  age: " << xiaohong->age << endl; 

    // 采用 初始化列表方式 初始化对象成员
    Student xiaoming = Student(12, 13);
    cout << "name: " << xiaoming.name << "  age: " << xiaoming.age << endl; 
    Student *xiaohong = new Student(14, 15);
    cout << "name: " << xiaohong->name << "  age: " << xiaohong->age << endl; 

    return 0;
}