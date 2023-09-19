#include<iostream.h>
#include<conio.h>
#include<string.h>

void main()

   {
     char a[100],b[100];
     clrscr();

     cout<<"Enter the string=";
     cin>>a;

     strcpy(b,a);
     strrev(b);

     if(strcmp(a,b)==0)
	 {
	   cout<<" String is rev";

	 }
     else
	 {
	   cout<<" String is not rev";
	}
     getch();
     }
