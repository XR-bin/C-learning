//include 头文件包含，<>包含系统文件  iostream标注的输入输出流
#include <iostream>

//使用命名空间
using namespace std;

//C++工程中有且仅有一个main，它是程序的唯一入口
//main就是一个函数名(有且仅有一个)
//main右边()里面描述的是函数的形参(形参类型 形参名)
int main(int argc, char *argv[]) 
{    
    int num=0;
    //cout输出设备(终端、屏幕)
    //endl换行
    cout << "Hello World!\n" << endl;
    //cin设备输入
    cin >> num ;

    cout << "input number is " << num << endl;
    
    return 0;
}


