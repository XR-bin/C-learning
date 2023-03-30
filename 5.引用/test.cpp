#include <iostream>

using namespace std;

int main(int argc, char *argv[]) 
{    
    //引用作用就是给某个变量取一个别名
    //引用本质就是指针常量
    int a=10;
    int* const p = &a;   //常量指针：指针指向不可改变，但指向的变量可以改变其值

    int &q = a;          //引用： 引用不可重新赋值，但可以改变被引用变量的值

    cout << "第一次 a :" << a << "  " << "*p:" << *p << "  " << "q:" << q << endl;

    *p = 20;
    cout << "第二次 a :" << a << "  " << "*p:" << *p << "  " << "q:" << q << endl;

    q = 30;
    cout << "第三次 a :" << a << "  " << "*p:" << *p << "  " << "q:" << q << endl;

    
    return 0;
}