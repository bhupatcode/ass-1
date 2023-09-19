#include<iostream.h>
#include<conio.h>

class intre
{
	public:
	int m,t,i,si;

	public:
	void data()  //this is the inside class of member funcion

	{
		cout<<"Enter the amount=";
		cin>>m;

		cout<<"Enter the time=";
		cin>>t;

		cout<<"Enter the intrest=";
		cin>>i;

		si=m*t*i/100;

		cout<<"total intrest ="<<si;


	}
};
void main()
{
	intre r1;
	clrscr();
	r1.data();
	getch();

}