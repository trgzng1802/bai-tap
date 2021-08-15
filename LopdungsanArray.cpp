//mảng 1 chiều là mảng tĩnh, mảng trở thành con trỏ và mất thong tin chiều dài không có nhiều hàm hỗ trợ sẵn
//để sử dụng thì cần khai bao thư viện
#include <bits/stdc++.h> //hàm soft cần khai báo thư viện này
#include <array>
using namespace std;

void printArray( array <int, 5> &arr)
{
    for ( int &item : arr)
    {
        cout << item << " ";
    }
}
int main()
{
    array <int, 5> arr{ 2, 5, 6, 4, 8 };   //số phần tử của mảng phải xác định cụ thể
    sort(arr.begin(), arr.end());
    printArray(arr);
    cout << endl;
    sort(arr.rbegin(), arr.rend());
    cout << endl;
    printArray(arr);
    return 0;
}