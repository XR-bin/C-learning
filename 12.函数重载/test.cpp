#include <iostream>

using namespace std;
/*
    函数重载：用同一个函数名 代表不同的函数功能.(是c++的多态的特性（静态多态）)
*/

/*
    重载条件：同一作用域，函数的参数类型不同、个数不同、顺序不同 都可以重载。
            （返回值类型不能作为重载的条件）
*/

void fun(int a, int b)
{
    cout << "重载函数1" << endl;
}

void fun(char b, int c)
{
    cout << "重载函数2" << endl;
}

void fun(int b, char c)
{
    cout << "重载函数3" << endl;
}

void fun(int b, int c, int a)
{
    cout << "重载函数4" << endl;
}

int main(int argc, char *argv[]) 
{    
    char a=0; 
    int b=0;

    fun(b, b);
    fun(a, b);
    fun(b, a);
    fun(b, b, b);

    return 0;
}