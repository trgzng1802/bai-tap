#include <iostream>
using namespace std;

int main()
{
    //int x = 5;
    //cout << endl;
    //cout << "Gia tri cua x la: " << x << endl;
    //cout << "Dia chi cua x la: " << &x << endl; //& la toan tu dia chi
    //cout << "Gia tri tai dia chi cua x la: " << *&x << endl; //* la gia tri tai dia chi
    //*&x = 10; 
    //cout << "Gia tri cua x sau khi gan gia tri tai dia chi cua x la 10: " << x << endl; 
    int value = 10;
    int *pointer = &value;
    //cout << pointer << endl;
    //cout << *pointer << endl;
    //*pointer = 100;
    //cout << value << endl;
    cout << sizeof(*pointer);
    return 0;
}