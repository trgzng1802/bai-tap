#include <stdio.h> 
#include <conio.h> 
int main() 
{ 
 long int i; 
 const j = 0345, k = 0XA9; 
 printf("\nNhap so nguyen he 10 : "); 
 scanf("%d",&i); 
 printf("\n Chuyen sang he 8 la : %o",i); 
 printf("\n Chuyen sang he 16 la : %X",i); 
 printf("\n Hang nguyen he 8 : %7d",j); 
 printf("\n Hang nguyen he 16 : %7d",k); 
 getch(); 
} 