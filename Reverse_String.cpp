//bài này chỉ dung được cho chuỗi không có kí tự trống
#include <iostream>

using namespace std;

void invertS(string *str_ptr );

int main()
{
   string s;
   cin >> s;
   string *str_ptr {nullptr};
   str_ptr = &s; //lấy địa chỉ của chuỗi s
   invertS(str_ptr);
   cout << "Reversed string: " << s << endl;
};

void invertS(string *str_ptr) {
    string str = *str_ptr; //lấy giá trị của con trỏ str_ptr <=> chuỗi s
    string temp = str; // phải có dộ dài nhất định
    int length = str.length();

    int j = length - 1;
    for (int i = 0; i < length; i++) {
        temp[i] = str[j];
        j--;
    };
    *str_ptr = temp; //giá trị của con trỏ str_ptr = temp <=> s = temp
};