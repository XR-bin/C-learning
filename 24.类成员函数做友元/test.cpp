#include <iostream>

using namespace std;

class Home;   //声明类

class GoodFriend {
public:
    Home* home;
    void gotoBedRoom();
};

class Home {
    // 将GoodFriend中的成员函数作为友元函数
    friend void GoodFriend::gotoBedRoom();
public:
    string livingRoom = "客厅";

private:
    string bedRoom = "卧室";
};

void GoodFriend::gotoBedRoom() {
    cout << home->livingRoom << endl;
    cout << home->bedRoom << endl;      // 能够正常访问私有属性
}

int main() {
    Home home;
    GoodFriend g;

    g.home = &home;

    g.gotoBedRoom();
}