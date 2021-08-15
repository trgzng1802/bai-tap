#include <iostream>
using namespace std;
int main()
{
    int arr[100];
    for (int i = 0; i < 100; i++)
    {
        arr[i] = i;
    } 
    for (int &item : arr) //tham chieu toi vung nho
    {
        cout << item << " ";
    }
    return 0;
}
//vong lap khong lam viec voi con tro mang
//vong lap foreach phai biet duoc kich thuoc cua mang do