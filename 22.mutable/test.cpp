#include <iostream>

using namespace std;

// mutable:
//      - 用来修饰属性的，表示可变的
//      - 被mutable修饰的属性，可以在常函数中修改，也可以由常对象修改

class Animal{
public:
    int age;
    mutable int num;

    Animal(int age, int num):age(age),num(num){}

    void fun1(int NewAge, int NewNum)const{
        // age = NewAge;     //报错
        num = NewNum;
        cout << "这是个常函数" << endl;
    }

    void fun2(void){
        cout << "这是个普通函数" << endl;
    }
};

int main(int argc, char *argv[]) 
{ 
    const Animal dog = Animal(10,10);
    Animal cat(10, 10);

    // dog.age = 20; //报错
    dog.fun1(10,200);
    cout << "1-dog.num :" << dog.num << endl;
    dog.num = 300;
    cout << "2-dog.num :" << dog.num << endl;
    // dog找不到fun2函数

    cat.age = 20;
    cat.fun1(10, 100);
    cat.fun2();

    return 0;
}