#include<iostream.h>
#include<conio.h>

class bank
{
	  public :
	  char dname[100];
	  int acc,dipamo,withd;
	  double balance;
	  char type[100];

	  public:
	  void assign()
	       {
		    cout<<"Enter the customer name=";
		    cin>>dname;

		    cout<<"Enter the type of account=";
		    cin>>type;

		    cout<<"Enter the account no=";
		    cin>>acc;

		    cout<<"Enter the balance=";
		    cin>>balance;
	       }

	  void depoamo()
			  {
			      int k;

			      cout<<endl<<"IF YOU DEPOSITE AMOUNT"<<endl<<"1] YES"<<endl<<"2] NO"<<endl;
			      cin>>k;

			      if(k==1)
			      {
			      cout<<"Enter the deposit amount=";
			      cin>>dipamo;

			      balance=balance+dipamo;
			     // cout<<"YOUR balance="<<total<<endl<<endl;
			      }
			      else
			      {

			      }




			    }
	  void withcheck()
			   {
				 int l;

				 cout<<endl<<" IF  YOU  WITHDRAW AMOUNT "<<endl<<"1] YES"<<endl<<"2] NO"<<endl;
				 cin>>l;

				if(l==1)
				{
				cout<<"Enter the withdraw amount=";
				cin>>withd;
				}
				if(withd<=balance)
					{
					  balance=balance-withd;
					}
				else
					{

					  cout<<"|--------------------------|"<<endl;
					  cout<<"|     EROOR MESSEGE        |"<<endl;
					  cout<<"|--------------------------|"<<endl;
					  cout<<"|   YOU HAVE LOW BALANCE !!|"<<endl;
					  cout<<"|--------------------------|"<<endl;
					}





			   }
	  void dis()
			  {


			      cout<<"|________________________________|"<<endl;
			      cout<<"|    CUSTOMERS DETAILS           |"<<endl;
			      cout<<"|________________________________|"<<endl;
			      cout<<"|customer name="<<dname<<"       |"<<endl;
			      cout<<"|Account type="<<type<<"         |"<<endl;
			      cout<<"|Account No="<<acc<<"            |"<<endl;
			      cout<<"|CUrrent balance="<<balance<<"   |"<<endl;
			      cout<<"|________________________________|"<<endl;

			  }

	  };

	  void main()
			   {
				   bank b1;
				    clrscr();
				  b1.assign();
				  b1.depoamo();
				  b1.withcheck();
				  b1.dis();
				  getch();
			    }