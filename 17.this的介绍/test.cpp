#include <iostream>

using namespace std;

// this: 是一个用来指向当前对象的指针
// 当前对象：谁调用这个函数，this就指向谁

// 理论上来讲，在类的内部。访问当前类中的(非静态)成员的时候，应该都使用this->来访问。
// 但实际上，绝大多数的情况下，this->都是可以省略不写的。

//this在什么情况下不能省略？
//      如果在一个函数内，出现了局部变量和属性同名的情况下，为了区分局部变量和属性，需要
//      显式使用this->来访问属性。

class Animal{
public:
    int age;

    void func(int age){
        this->age += age;
        cout << this->age << endl;
    }
};

int main(int argc, char *argv[]) 
{ 
    Animal dog;
    dog.age = 10;

    dog.func(20);

    return 0;
}