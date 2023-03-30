#include <iostream>

using namespace std;

// this: 设计函数，返回对象本身

class Animal{
public:
    int age;

    Animal& func(int age){
        this->age += age;
        
        return *this;
    }
};

int main(int argc, char *argv[]) 
{ 
    Animal dog;
    dog.age = 10;

    dog.func(20).func(30);

    cout << dog.age << endl;

    return 0;
}