#include<iostream.h>
#include<conio.h>

class rect
{
	public:
	int h,l;
	int data();


};
int rect ::data()
{
	cout<<"H=";
	cin>>h;

	cout<<"l=";
	cin>>l;

return(h*l);
}

void main()
{
	rect r1;
	clrscr();
       //	r1.h=20;
       //	r1.l=2;
	cout<<"area="<<r1.data();


	getch();

}