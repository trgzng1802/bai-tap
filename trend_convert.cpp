#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
#include <iomanip>

using namespace std;
int main()
{
	string x;
	
	//cout<<"Mai ben nhau ban nho";
    cout << "Nhap ten Lop: ";
    cin >> x ;
	cout<< endl;
    Sleep(1000);
    
    cout << "Cam on vi da ben nhau";
	cout<<endl<< endl;
    Sleep(1000);
    
	cout<< "Hen gap lai";
    Sleep (1000);
    
    cout << endl;
    cin.ignore();
    
    cout << "\nDang load 0%....";
    Sleep(2000);
    cout << "\nDang load 25%...";
    Sleep(1500);
    cout << "\nDang load 50%...";
    Sleep(1000);
    cout << "\nDang load 75%...";
    Sleep(1000);
    cout << "\nDa load xong!!!"<< endl;
    Sleep(500);
	   
    fstream newfile;
    newfile.open("input.txt", ios::in);
    if (newfile.is_open())
    {
        string tp;
        while (getline(newfile, tp))
        {
            cout << tp << endl;
            Sleep(100);
        }
        newfile.close();
    }
  
  
  cout<< endl<< endl<< endl;
  
  fstream a;
    a.open("1.txt", ios::in);
    if (a.is_open())
    {
        string c;
        while (getline(a, c))
        {
            cout << c << endl;
            Sleep(100);
        }
        a.close();
    }
  cout<< endl<< endl<< endl;
  
  fstream b;
    b.open("2.txt", ios::in);
    if (b.is_open())
    {
        string e;
        while (getline(b, e))
        {
            cout << e << endl;
            Sleep(100);
        }
        b.close();
    }  
    cout<< endl<< endl<< endl;
    
 /*fstream f ;
    f.open("3.txt", ios::in);
    if (f.is_open())
    {
        string g;
        while (getline(f, g))
        {
            cout << g << endl;
            Sleep(100);
        }
        f.close();
    }  
    
    cout<< endl<< endl<< endl;
    
    
fstream h ;
    h.open("4.txt", ios::in);
    if (h.is_open())
    {
        string i;
        while (getline(h, i))
        {
            cout << i << endl;
            Sleep(100);
        }
        h.close();
    }  
    
    fstream j ;
    j.open("5.txt", ios::in);
    if (h.is_open())
    {
        string k;
        while (getline(j, k))
        {
            cout << k << endl;
            Sleep(100);
        }
        j.close();
    }  
    
    fstream l ;
    l.open("6.txt", ios::in);
    if (l.is_open())
    {
        string m;
        while (getline(l, m))
        {
            cout << m << endl;
            Sleep(100);
        }
        l.close();
    }  
    
    fstream n ;
    n.open("7.txt", ios::in);
    if (n.is_open())
    {
        string q;
        while (getline(n, q))
        {
            cout << q << endl;
            Sleep(100);
        }
        n.close();
    }  
    
    fstream o ;
    o.open("8.txt", ios::in);
    if (o.is_open())
    {
        string v;
        while (getline(o, v))
        {
            cout << v << endl;
            Sleep(100);
        }
        o.close();	
    }*/  
    
  system("pause");
  
  
  
    return 0;
}