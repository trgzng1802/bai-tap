#include <iostream>
using namespace std;
int main()
{
    float so;
    float S=0;
    cout << "Nhap so can tinh tong tu 1 den no: ";
    cin >> so;
    cout << "\n";
    cout << "Tong tu 1 den so do la : ";
    for (float i = 1; i <= so; i++)
    {
        S = S + i;
        if (i < so)
        {
            cout << i << " + ";
        } 
        else {
            cout << i << " = ";
        }
    }
    cout << S;
    return 0;
}