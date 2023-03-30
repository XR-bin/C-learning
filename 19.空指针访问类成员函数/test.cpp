#include <iostream>

using namespace std;

// 空指针的对象能够调用成员函数，但是需要保证这个函数中不出现this进行空间访问

class Animal{
public:
    int age;

    void fun1(void){
        cout << "fun1函数正常运行" << endl;
    }

    void fun2(void){
        cout << "fun2函数正常运行,age: " << this->age << endl;
    }

    void fun3(void){
        if(this == nullptr) {
            cout << "对象是空对象" << endl;
            return;
        }
        cout << "fun3函数正常运行,age: " << this->age << endl;
    }
};

int main(int argc, char *argv[]) 
{ 
    Animal *dog = nullptr;

    dog->fun1();
    // dog->fun2();  //报错
    dog->fun3();

    return 0;
}