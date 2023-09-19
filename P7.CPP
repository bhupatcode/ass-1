#include<iostream.h>
#include<conio.h>

void main()
 {
   int i,n,m;
   clrscr();


   cout<<"Enter the number=";
   cin>>n;

   m=1;

   for(i=2;i<n;i++)
     {
      if(n%i==0)
	m=0;
      }
     {
      if(m==1)
	 cout<<" NUMBER IS PRIME";
      else
	 cout<<" NUMBER IS NOT PRIME";
      }
     getch();
   }