#include <iostream>
using namespace std;

//对象：具有特定功能，能够解决特定问题的实体
//类  ：由若干个具有相同特征和行为的对象组成的集合

//类的特性： 我们一般叫属性，本质就是变量
//类的行为： 本质就是函数

//类的权限关键字分为：private（私有）、protected（保护）、public（公有）3种权限
/*
     private     属性私有     对象内部可访问       对象外部不可访问
     protected   属性保护     对象内部可访问       对象外部不可访问
     public      属性公有     对象内部可访问       对象外部可访问
*/

/*
  类创建格式
  class 类名{
  权限关键字
      属性....
      行为....
  };
*/

class Student {
public:
    //属性
    string name;
    int age;
    string gender;
    //行为
    void introduce(void)
    {
        cout << "我的名字叫：" << name << " " << "性别：" << gender << " " << "今年" << age << "岁" << endl;
    }
    void greetings(void);
};

void Student::greetings(void)
{
    cout << "老师好" << endl;
}

int main(int argc, char *argv[]) 
{    
    //创建对象格式1 ： 类名 对象名 = 类名()         对象存储空间在栈区
    Student xiaoming = Student();
    //创建对象格式2 ： 类名 *对象名 = new 类名()    对象存储空间在堆区
    Student *xiaohong = new Student();

    //访问对象成员方式1  ----------  对应创建对象方式1
    //格式 ： 对象名.属性或行为
    xiaoming.name = "小明";
    xiaoming.age = 18;
    xiaoming.gender = "男";
    xiaoming.introduce();
    xiaoming.greetings();

    //访问对象成员方式2  ----------  对应创建对象方式2
    //格式： 对象名->属性或行为       (*对象名).属性或行为
    xiaohong->name = "小红";
    (*xiaohong).age = 18;
    xiaohong->gender = "女";
    xiaohong->introduce();
    xiaohong->greetings();

    return 0;
}

