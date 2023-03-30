#include <iostream>

using namespace std;

// 常对象：
//      - 创建对象的时候，使用关键字const修饰的对象，就是常对象
//      - 常对象可以读取任意属性的值，但是不允许修改
//      - 常对象，只能调用常函数，不能调用普通函数

class Animal{
public:
    int age;

    Animal(int age):age(age){}

    void fun1(int NewAge)const{
        // age = NewAge;     //报错
        cout << "这是个常函数" << endl;
    }

    void fun2(void){
        cout << "这是个普通函数" << endl;
    }
};

int main(int argc, char *argv[]) 
{ 
    const Animal dog = Animal(10);
    Animal cat(10);

    // dog.age = 20; //报错
    dog.fun1(10);
    // dog找不到fun2函数

    cat.age = 20;
    cat.fun1(10);
    cat.fun2();

    return 0;
}