#include <iostream>

//使用命名空间
using namespace std;

int main(int argc, char *argv[]) 
{
    /**************申请一个空间****************/
    //格式：指针 = new 变量类型    
    int *p = NULL;
    p = new int;   //申请一个4字节空间(int)
    *p = 266;
    cout << "*p = " << *p << endl;
    delete p;
    //格式：指针 = new 变量类型(值)
    p = new int(100);  //申请1个4字节空间(int)，并且*p赋值100
    cout << "*p = " << *p << endl;
    delete p;

    /**************申请一连串空间****************/
    //格式： 指针 = new 数据类型[空间个数]
    //格式： 指针 = new 数据类型[空间个数] {元素值，....}
    //p = new int[5];
    p = new int[5]{10,20,30,40,50};
    int i=0;
    for(i=0;i<5;i++)
    {
        cout<<p[i]<<" ";
    }
    cout<<endl;

    //如果new有[] 那么delete是也需要[]
    delete [] p;
    
    return 0;
}