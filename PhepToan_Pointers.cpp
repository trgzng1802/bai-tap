#include <iostream>
using namespace std;

void printPtr(int *ptr)
{
    cout << ptr << endl;
    cout << *ptr << endl;
}

int main()
{
    int a[5] = { 4, 5, 6, 8, 2};
    for ( int *ptr = a ; ptr < a + 5 ; ptr ++)
    {
        printPtr(ptr);
    }
    return 0;
}