#include <iostream>

using namespace std;

//创建命名空间格式  namespace 空间名{ 成员 }
namespace a{
    int num;
};

//命名空间可以嵌套
namespace b{
    int temp;
    namespace c{
        int k;
    };
}

//命名空间是开放的，随时可以向空间添加新成员
namespace a{
    int num2;
}

//当两个命名空间的某个成员相同，并且两个空间都用来using，那么using对那个成员无效
namespace d1{
    int f=10;
}
namespace d2{
    int f=20;
}

//命名空间的某个成员与全局变量或局部变量名重复，那么using对那个成员无效
int g=30;

namespace j{
    int g=40;
    int y=50;
}

int main(int argc, char *argv[]) 
{    
    a::num = 10;
    cout << a::num << endl;

    /***************************/
    b::temp = 20;
    b::c::k = 30;
    cout << b::temp << endl;
    cout << b::c::k << endl;

    /***************************/
    a::num2 = 40;
    cout << a::num2 << endl;

    /***************************/
    //用using去指定命名空间某个成员
    //格式：using 命名空间::成员
    using a::num;
    cout << "using命名空间a的num成员   " << num << endl;
    //用using去指定整个命名空间
    //格式：using namespace 命名空间
    using namespace b;
    cout << "using整个命名空间b--temp   " << temp << endl;
    cout << "using整个命名空间b--c::k   " << c::k << endl;


    /******************************/
    using namespace d1;
    using namespace d2;
    //cout << "using整个命名空间d1--f   " << f << endl;    //报错
    cout << "using整个命名空间d1--f   " << d1::f << endl;
    cout << "using整个命名空间d2--f   " << d2::f << endl;

    /******************************/
    using namespace j;
    int y=60;

    cout << "全局g   " << ::g << endl;
    cout << "局部y   " << y << endl;
    cout << "using整个命名空间j--g   " << j::g << endl;
    cout << "using整个命名空间j--y   " << j::y << endl;
    
    return 0;
}