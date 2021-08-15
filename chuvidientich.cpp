 
#include <stdio.h>
#include <iostream>
#define pi 3.1415
using namespace std;
 
int main()
{
    int a,b;
    cout << "-----------Tinh dien tich HCN----------\n";
    cout << "Nhap vao canh a: " ;
    cin >> a;
    cout << "Nhap vao canh b: " ;
    cin >> b;
    cout << "Dien tich HCN : " << a*b << "\n";
    cout << "Chu vi HCN: " << (a+b)*2;
 
    cout << "\n-----------Tinh dien tich HV----------\n";
    cout << "Nhap vao canh a = " ;
    cin >> a;
    cout << "Dien tich HV : " << a*a << "\n";
    cout << "Chu vi HV : " << a*4;
 
    cout << "\n-----------Tinh dien tich HT----------\n";
    float r;
    cout << "Nhap vao ban kinh r = " ;
    cin >> r;
    cout << "Dien tich HT la : " << r*r*pi << "\n";
    cout << "Chu vi HT la : " << 2*r*pi;
 
    return 0;
}