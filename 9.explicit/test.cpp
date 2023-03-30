#include <iostream>

using namespace std;

/*
    explicit:
            禁止通过构造函数进行的隐式转换。声明为explicit的构造函数不能在隐式转换中使用。
            (即不能用隐性方式触发构造函数。)

*/

class Number{
public:
    //构造函数1
    explicit Number(){
        cout << "我是Number()构造函数1" << endl;
    }
};

int main(int argc, char *argv[]) 
{    
    //*****************************************1.显性调用
    // Number a = Number();

    //*****************************************1.隐形性调用---以赋值的方式触发构造函数
    // Number a = {};    //报错

    return 0;
}