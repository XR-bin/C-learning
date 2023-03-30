#include <iostream>

using namespace std;

// 析构函数：
//      是对象生命周期的终点，在对象空间被销毁之前调用
//      在析构函数中，一般进行资源的释放，堆内存的销毁

/*
    析构函数格式：
        ~类名()
        {
            操作内容
        }
    注意：析构函数不能有返回值和参数
*/

class Student{
public:
    int *p;

    ~Student()
    {
        cout << "析构函数" << endl;
        if(p != nullptr) {
            delete p;
            p=nullptr;
        }
    }
};


int main(int argc, char *argv[]) 
{    
    Student *xiaoming = new Student();
    xiaoming->p = new int(1);

    delete xiaoming;
    return 0;
}