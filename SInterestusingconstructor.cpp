#include<iostream>
#include<conio.h>
using namespace std;
class interest
{
	float p,t,SI,a,r;
	public:
		interest()
		{
			cout<<"Enter Principal Amount: ";
			cin>>p;
			cout<<"Enter Time period(in year): ";
			cin>>t;
			cout<<"Enter rate of interest: ";
			cin>>r;
		}
		int SInterest()
		{
			SI=(p*r*t)/100;
			a= p+SI;
		}
		int disp()
		{
			cout<<"Simple Interest: "<<SI<<endl;
			cout<<"Total amount: "<<a;
		}
		
};
int main()
{
	interest i1;
	i1.SInterest();
	i1.disp();
	getch();
}
