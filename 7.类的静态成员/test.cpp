#include <iostream>
using namespace std;

/*
    被static修饰的类成员成为静态成员，静态成员分为：静态属性 和 静态函数
*/

/*
    静态属性：
            静态的属性内存是开辟在全局区的，与对象无关，并不隶属于对象。在程序编译完成
        时，就已经完成了空间开辟于初始化的赋值操作了，并且在程序运行的整个过程中始终保持存在。
        (说的通俗一点就是，静态属性就是个全局变量，只是这个全局变量是某个类的成员)

    静态函数：
            静态成员函数是属于类 而不是对象（所有对象 共享），并且静态成员函数内只能操
        作静态成员数据。
        (一般静态函数都用在工具类中，作为一个工具函数使用)
*/


class MyNumber{
public:
    //在类中定义的静态成员，必须在类内定义，类外进行初始化赋值
    static int num;
    //如果是静态常量，且数据类型是整数型(int/short/long/long long/char/bool),则允许在类内初始化赋值。
    const static int IP = 100;

    //静态函数只能使用静态静态成员
    int c=10;
    static void use(void)
    {
        cout << "num: " << num << endl;
        //cout << "c: " << c << endl;      //报错
    }
};
//在类外。对静态成员进行初始化。
int MyNumber::num = 10;

int main(int argc, char *argv[]) 
{    
    //访问静态成员的方式
    //1.可以使用对象访问，但要切记不同对象，访问的是同一块空间
    //  (即如果某个对象修改了静态成员的值，其他对象访问到的值也是会变化的)
    //2.可以直接通过类访问，不需要创建对象。

    /* 注意：一般情况下，更加推荐使用第二种方式来访问静态成员 */

    //访问方式1
    MyNumber a;
    MyNumber b;
    cout << "a: " << a.num << endl;
    cout << "b: " << b.num << endl;
    cout << "-----------------------" << endl;
    a.num = 20;
    cout << "a: " << a.num << endl;
    cout << "b: " << b.num << endl;
    cout << "-----------------------" << endl;
    
    //访方式2
    MyNumber::num = 90;
    cout << "MyNumber::num: " << MyNumber::num << endl;
    MyNumber::use();
    cout << "-----------------------" << endl;

    return 0;
}