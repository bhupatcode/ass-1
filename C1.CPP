#include<iostream.h>
#include<conio.h>

 class A
 {
	public:
	int a,b;

	public:
	A(int a1,int b1)
	{
		a=a1;
		b=b1;
	}

	void dis()
	{
		cout<<"A="<<a<<endl;
		cout<<"B="<<b<<endl;
	}
 };
 void main()
 {
	clrscr();
	A i1(10,20);
	i1.dis();
	getch();


 }
