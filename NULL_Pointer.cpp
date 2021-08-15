//null la gia tri khong ton tai
#include <iostream>
using namespace std;

int main()
{
    int *pointer = nullptr; //nullptr la keyword cua C++
    if (pointer)
    {
        cout << "con tro den dia chi";
    }
    else
    {
        cout << "con tro null";
    }
    //pointer null thi coi nhu pointer = 0
}