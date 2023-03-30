#include <iostream>

using namespace std;

class Friend;  //声明类

class Home {
    // 将类设置为友元类
    friend class Friend;
public:
    string livingRoom = "客厅";

private:
    string bedRoom = "卧室";
};

class Friend {
public:
    Home *home;

    void fun1() {
        cout << home->livingRoom << endl;
        cout << home->bedRoom << endl;      // 能够正常访问私有属性
    }

    void fun2() {
        cout << home->livingRoom << endl;
        cout << home->bedRoom << endl;      // 能够正常访问私有属性
    }
};


int main() {
    Home home;

    Friend a;
    a.home = &home;

    a.fun1();
    a.fun2();
}