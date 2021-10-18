#include<iostream>
#include<conio.h>
using namespace std;
class arithmatic
{
	private:
		float a,b,sum,sub,mul;
		float div;
	public:
		int value()
		{
			cout<<"Enter Value of a and b: ";
			cin>>a>>b;	
		}
		int addition()
		{
			value();
			sum=a+b;
			cout<<"\nAddition= "<<sum;
		}
		int subtraction()
		{
			value();
			sub=a-b;
			cout<<"\nSubtraction= "<<sub;
		}
		int multiplication()
		{
			value();
			mul=a*b;
			cout<<"\nMultiplication= "<<mul;			
		}
		float division()
		{
			value();
			div=a/b;
			cout<<"\nDivision= "<<div;
		}
};
int main()
{
	arithmatic a;
	int choice,i;
	for(i=0;i<4;i++)
	{	
		cout<<"\n1.Addition.\n2.Subtraction.\n3.Multiplication.\n4.Division."<<endl;
		cout<<"\nEnter Choice: ";
		cin>>choice;
		switch(choice)
		{
			case 1:
				a.addition();
				break;
			case 2:
				a.subtraction();
				break;
			case 3:
				a.multiplication();
				break;
			case 4:
				a.division();
				break;
			default:
				cout<<"--------------------Invalid choice--------------------";
		}
	}
	getch();
}
