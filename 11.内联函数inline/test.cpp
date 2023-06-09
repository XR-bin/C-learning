#include <iostream>

using namespace std;
/*
    内联函数(inline): 在编译阶段 将内联函数中的函数体 替换函数调用处。避免函数调用时的开销
                     (可以理解为宏定义的升级版)
*/

//回顾一下宏定义，以下面为例子
#define ADD(a, b)  (a + b)
//实际上程序的mian里的ADD(a, b)会在预编译的时候会被替换成a+b

//内联函数以下面为例
inline int myADD(int a, int b)
{
    return a+b;
}
//实际上程序的mian里的myADD(c, d)会在编译的时候会被替换成c+d

/*
    相同点：
            宏函数和内联函数 都会在适当的位置 进行展开 避免函数调用开销。
    不同点
            1.  
                宏函数在预处理阶段展开    
                内联函数在编译阶段展开
            2.
                宏函数的参数没有类型，不能保证参数的完整性。
                内联函数的参数有类型 能保证参数的完整性。
            3.
                宏函数没有作用域的限制，不能作为命名空间、结构体、类的成员
                内联函数有作用域的限制，能作为命名空间、结构体、类的成员
*/

/*
    使用内联函数的注意事项：
        1.
            在内联函数定义的时候加inline修饰
        2.
            类中的成员函数 默认都是内联函数（不加inline 也是内联函数）
        3.
            有时候 就算加上inline也不一定是内联函数（内联函数条件）
                1-不能存在任何形式的循环语句
                2-不能存在过多的条件判断语句
                3-函数体不能过于庞大
                4-不能对函数取地址
        4.
            有时候不加inline修饰 也有可能是内联函数。
        5.
            内不内联 由编译器决定
*/



int main(int argc, char *argv[]) 
{    
    int a=10, b=20;
    cout << ADD(a, b) << endl;

    int c=30, d=40;
    cout << myADD(c, d) << endl;

    return 0;
}