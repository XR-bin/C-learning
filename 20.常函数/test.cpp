#include <iostream>

using namespace std;

// const：可以修饰类中的成员函数，表示这个函数是个“常函数”
//
// 常函数：
//      - 使用关键字const修饰
//      - 常函数中，不允许修改属性值
//      - 常函数中，不允许调用普通函数，只能调用其它常函数

class Animal{
public:
    int age;

    void fun1(int NewAge)const{
        // age = NewAge;     //报错
    }
};

int main(int argc, char *argv[]) 
{ 
    return 0;
}