#include <iostream>

using namespace std;

// 构造函数:
//      C++中的构造函数可以分为哪些类型？
//      --按照参数：有参构造函数、无参构造函数
//      --按照类型：普通构造函数、拷贝构造函数

// 拷贝构造：
//      根据一个对象。拷贝出另一个对象，新对象与原来的对象地址不同，但是属性值是相同。
//      而这个属性的拷贝操作，是在拷贝构造函数中完成的。
//      如果我们自己没写拷贝构造函数，系统会自己提供拷贝构造函数。

class Student{
public:
    int age;
    int num;

    // 普通构造函数
    Student(int age, int num):age(age),num(num)
    {
        cout << "普通构造函数"  << endl;
    }

    //拷贝构造函数
    //参数利用了引用的方式
    Student(const Student &p)
    {
        age = p.age + 1;
        num = p.num + 1;
        cout << "拷贝构造函数" << endl;
    }
};


int main(int argc, char *argv[]) 
{    
    Student xiaoming = Student(10,20);
    Student xiaohong = xiaoming;           //这个等价于 Student xiaohong = Student(xiaoming);

    return 0;
}