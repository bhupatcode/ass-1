#include<iostream.h>
#include<conio.h>

void main()

{
 int r,rev=0,m,n;
 clrscr();

 cout<<"Enter the no=";
 cin>>n;

 m=n;

 while(n>0)
 {
  r=n%10;
  rev=rev*10+r;
  n=n/10;
  }
 if(rev==m)
  cout<<"NUMER IS PALINDROME";
 else
    cout<<"NUIMER IS NOT PALINDROME";

    getch();
 }