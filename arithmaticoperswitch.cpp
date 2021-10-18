#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int choice,a,b,i,n;
	float add,sub,mult,divide;
	cout<<"Enter iteration: ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"\n\n1.Addition.\n2.Subtraction.\n3.Multiplication.\n4.Division."<<endl;
		cout<<"\nEnter choice: ";
		cin>>choice;
		cout<<"\nEnter two number: ";
		cin>>a>>b;
		switch(choice)
		{
			case 1:
				add=a+b;
				cout<<"\nAddition= "<<add;
				break;
			case 2:
				sub=a-b;
				cout<<"\nSubtraction= "<<sub;
				break;
			case 3:
				mult=a*b;
				cout<<"\nMultiplication= "<<mult;
				break;
			case 4:
				divide=a/b;
				cout<<"\nDivision= "<<divide;
				break;
			default:
				cout<<"\nInvalid choice! PLEASE Enter Valid choice....."<<endl;
		}
	}
	getch();
}
