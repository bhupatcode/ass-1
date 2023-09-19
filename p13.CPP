#include<iostream.h>
#include<conio.h>

void main()
  {
   int r,arm=0,n,m;
   clrscr();

   cout<<"Enter the no=";
   cin>>n;

   m=n;
   while(n>0)
    {
     r=n%10;
     arm=arm+(r*r*r);
     n=n/10;
    }
    if(arm==m)
      cout<<"NUMBER is ARMSTRONG"<<n;
    else
	cout<<"NUMBER IS NOT ARMSTRONG"<<n;

	getch();
    }