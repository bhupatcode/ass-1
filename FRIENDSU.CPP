#include<iostream>
#include<conio.h>

class A
{
	int a,b;

	public:
	int input()
	{
		std::cout<<"a=";
		std::cin>>a;

	std::cout<<"b=";
		std::cin>>b;


	}
	friend int add(A a1);

};
int add(A a1)
{
	int c;

	c=a1.a+a1.b;

	std::cout<<"SUM="<<c;

}
int main()
{
	A a1;

	a1.input();
	add(a1);
	getch();

}
