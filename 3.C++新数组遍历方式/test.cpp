#include <iostream>

using namespace std;

int main(int argc, char *argv[]) 
{    
    int arr[5] = {1, 2, 3, 4, 5};
    //C++的新遍历方式
    for(int ele : arr)
    {
        cout << ele << " ";
    }
    cout << endl;
    
    return 0;
}

