#include <iostream>

using namespace std;

// 友元函数：是一种特权函数，c++允许这个特权函数访问私有成员。

// 使用friend关键字声明友元。

//     friend关键字只出现在声明处，一个函数或者类 作为了另一个类的友元 那么这个函数或类
// 就可以直接访问 另一个类的私有数据。友元 重要用在运算符重载上。

class Home {
    // 将一个全局函数作为友元函数
    friend void gotoBedRoom2(Home *home);

public:
    string livingRoom = "客厅";

private:
    string bedRoom = "卧室";
};

// 普通函数
void gotoBedRoom1(Home *home) { 
    cout << home->livingRoom << endl;
    // cout << home->bedRoom << endl;     //报错
}

// 友元函数
void gotoBedRoom2(Home *home) { 
    cout << home->livingRoom << endl;
    cout << home->bedRoom << endl;      // 能够正常访问私有属性
}

int main() {
    Home a;

    gotoBedRoom1(&a);
    gotoBedRoom2(&a);
}

