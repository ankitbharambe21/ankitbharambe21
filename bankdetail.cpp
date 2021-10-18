#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class bank
{
	private:
		long int accnum,amount,dep,balance,w,i;
		char name[9000],acctype[800];
	public:
		int initdata()
		{
			cout<<"Enter Name : ";
			gets(name);
			cout<<"Enter account type: ";
			gets(acctype);
			cout<<"Enter Account Number: ";
			cin>>accnum;
			cout<<"Enter Amount: ";
			cin>>amount;
		}
		int deposit()
		{
			cout<<"Enter amount to deposit: ";
			cin>>dep;
			cout<<"Deposited Amount: "<<dep<<endl;
		}
		int withdraw()
		{
			balance=amount+dep;
			cout<<"Total available balance: "<<balance<<endl;
			cout<<"Enter amount to withdraw: ";
			cin>>w;
			if(w>balance)
			{
				cout<<"\n\n**********//Insufficient Balance//**********";
			}
			else
			{
				balance=balance-w;
			}
		}
		int display()
		{
			cout<<"\nName of depositer: "<<name<<endl;
			cout<<"Account No.: "<<accnum<<endl;
			cout<<"Account Type: "<<acctype<<endl;
			cout<<"Available Balance: "<<balance<<endl;
		}
};
int main()
{
	bank b;	
	b.initdata();
	b.deposit();
	b.withdraw();
	b.display();
	getch();
}
