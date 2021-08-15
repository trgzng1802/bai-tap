#include <iostream>
using namespace std;
//địa chỉ của mảng là địa chỉ cảu phần tử đầu tiên của mảng
int main()
{
    int arr[] = { 0, 4, 5, 8, 9 };//mỗi phần tử 4 bit
    cout << "Gia tri cua mang: " << *arr << endl; //bằng giá trị phần tử đầu tiền của mảng
    int *ptr = arr; //con trỏ trỏ vô phần tử đầu tiên của mảng
    cout << *(ptr) << endl;
    cout << "Dia chi cua mang: " << &arr << endl;
    cout << "Dia chi cua phan tu dau tien cua mang: " << &arr[0] << endl;
    cout << "Kieu du lieu cua mang: " << typeid(arr).name() << endl;
    cout << "Kich thuoc cua mang: " << sizeof(arr) << endl;
    cout << "Kieu du lieu cua con tro: " << typeid(ptr).name() << endl;
    cout << "Kich thuoc cua con tro: " << sizeof(ptr) << endl;
    //mảng truyền vào hàm sẽ thành con trỏ
}
