#include <iostream>

using namespace std;

/*
    注意：
        1.如果我们没有在一个类中写任何的构造函数，系统会自动为我们添加一个public权限的
        无参数构造函数，让我们可以创造对象
        2.如果我们给一个类写了构造函数了，此时系统将不再提供默认构造函数。
*/

class Number{
public:
    //构造函数
    Number(int a){
        cout << "我是Number(int a)构造函数" << endl;
    }
};


int main(int argc, char *argv[]) 
{    
    //Number a = Number();    // 没有任何构造函数时不报错；存在一个带参数的构造函数会报错
    // Number a;              // 没有任何构造函数时不报错；存在一个带参数的构造函数会报错
    return 0;
}