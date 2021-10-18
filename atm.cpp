#include<iostream>
#include<conio.h>
using namespace std;
class atm
{
	private:
		int pin;
		long int amount;
		long int balance=50000;
	public:
		int withdraw()
		{
			cout<<"Please Enter Pin number: ";
			cin>>pin;
			if(pin==5656)
			{
				cout<<"************ Welcome************\n\tAnkit Vasant Bharambe"<<endl;
				cout<<"Enter amount to withdraw: ";
				cin>>amount;
				cout<<"Please Collect Your Cash"<<endl;
				cout<<"Amount Withdrawn"<<endl;
				balance-=amount;
				cout<<"Current Available Balance: "<<balance<<endl;
			}
			else
			{
				cout<<"**********//Incorrect PIN//**********";
			}
		}
		int availbal()
		{
			cout<<"Please Enter Your PIN: ";
			cin>>pin;
			if(pin==5656)
			{
				cout<<"************ Welcome************\n\tAnkit Vasant Bharambe"<<endl;
				cout<<"Balance amount : "<<balance;
			}
			else
			{
				cout<<"**********//Incorrect PIN//********";
			}
		}
};
int main()
{
	atm a;
	int choice;
	cout<<"**********//Insert ATM Card//**********";
	cout<<"\n1.Withdraw.\n2.Balance."<<endl;
	cout<<"\nChoice: ";
	cin>>choice;
	switch(choice)
	{
		case 1:
			a.withdraw();
			break;
		case 2:
			a.availbal();
			break;
		default:
			cout<<"Invalid choice";
	}
	getch();
}
