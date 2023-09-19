#include<iostream.h>
#include<conio.h>

void main()
 {
   int f=0,s=1,t,n,i;
   clrscr();

   cout<<"Enter the number=";
   cin>>n;

   cout<<" "<<f<<" "<<s;

   for(i=2;i<=n;i++)

    {
       t=f+s;
       cout<<" "<<t;
       f=s;
       s=t;
       }
    getch();
    }
