#include<iostream.h>
#include<conio.h>

void main()
   {
      int  n,r,rev=0;
      clrscr();

      cout<<"Enter the number=";
      cin>>n;

      while(n>0)
       {
	r=n%10;
	rev=rev*10+r;
	n=n/10;
       }
    cout<<"Reverse number="<<rev;

    getch();

    }