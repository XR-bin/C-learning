#include <iostream>

using namespace std;

/*
    构造函数：
        构造函数是一个比较特殊的函数，是在对象创建的时候触发，用来对对象进行初始化赋值的操作
        (说通俗点就是在创建对象时自己会自动执行的函数)

    构造函数格式： 
        类名(参数1，参数2.....){
            执行内容
        }

    注意：
        1.构造函数的名字必须和类的名字一样
        2.构造函数不能写返回值类型
        3.构造函数可以有不同的重载
            重载---几个功能类似的同名函数，但是这些同名
                   函数的形式参数（指参数的个数、类型或
                   者顺序）必须不同，也就是说用同一个函
                   数完成不同的功能。
*/

class Number{
public:
    //构造函数1
    Number(){
        cout << "我是Number()构造函数1" << endl;
    }
    //构造函数2
    Number(int a){
        cout << "我是Number(int a)构造函数2" << endl;
    }
    //构造函数3
    Number(int a, int b){
        cout << "我是Number(int a, int b)构造函数3" << endl;
    }
};

int main(int argc, char *argv[]) 
{    
    //构造函数的调用---在创建对象时自己会被调用
    //*****************************************1.显性调用
    // Number a = Number();
    // Number a = Number(10);
    // Number a = Number(10, 20);

    // Number a;                //注意：无参构造在创建对象时后面不能带()，否则系统会认为它是在定义函数
    // Number a(10);
    // Number a(10, 20);

    // Number *a = new Number();
    // Number *a = new Number(10);
    // Number *a = new Number(10, 20);

    //*****************************************1.隐性调用---以赋值的方式触发构造函数
    // Number a = {};
    // Number a = {10};     // 只有一个参数时可以选择不写{}，直接写参数。
    // Number a = 10;
    Number a = {10, 20};
    
    return 0;
}


