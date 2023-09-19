#include<iostream.h>
#include<conio.h>

	class A
	{
		int a,b,c;

		public:
		void input()
		{
			cout<<"A=";
			cin>>a;

			cout<<"B=";
			cin>>b;

			cout<<"C=";
			cin>>c;
		}
		friend void max(A a1);
	};
	void max(A a1)
	{
		if(a1.a>a1.b && a1.a>a1.c)
		cout<<"A IS BIG";
		else if(a1.b>a1.a &&a1.a>a1.c )
		cout<<"B Is BIG";
		else if(a1.c>a1.a && a1.c>a1.b)
		cout<<"C IS BIG";
		else
		cout<<"WRONG";
	}
	void main()
	{
		A a1;
		clrscr();
		a1.input();
		max(a1);
		//a1.input();
		getch();
	}