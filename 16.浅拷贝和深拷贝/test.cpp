#include <iostream>

using namespace std;

// 浅拷贝：在拷贝构造函数中，直接完成属性拷贝操作。(默认的拷贝构造函数，就是浅拷贝)
// 深拷贝：在拷贝构造函数中，创造出来新的空间，类的属性中的指针指向的是一个新的空间。

/***************************浅拷贝案例***************************/
class Pupil{};
class Student{
public:
    int age;
    Pupil *pup;

    // 构造函数
    Student(){
        age = 10;
        pup = new Pupil();
    }

    //拷贝函数
    Student(const Student& p){
        age = p.age;
        pup = p.pup;
    }

    //析构函数
    ~Student(){
        if(pup != nullptr)
        {
            delete pup;
            pup = nullptr;
        }
    }
};
/***************************深拷贝案例***************************/
class Dog{};
class Animal{
public:
    int age;
    Dog *d;

    // 构造函数
    Animal(){
        age = 10;
        d = new Dog();
    }

    //拷贝函数
    Animal(const Animal& p){
        age = p.age;
        d = new Dog();
    }

    //析构函数
    ~Animal(){
        if(d != nullptr)
        {
            delete d;
            d = nullptr;
        }
    }
};


int main(int argc, char *argv[]) 
{   
    /**************************浅拷贝****************************/
    //程序运行完会报错，因为程序是以压栈方式在内存运行的，
    //程序结束时，xiaohong的对象先出栈，pup指针指向的地
    //址被删除，导致xiaoming对象出问题 
    // Student xiaoming;
    // Student xiaohong = xiaoming;

    /**************************深拷贝****************************/
    Animal a;
    Animal b = a;
    return 0;
}