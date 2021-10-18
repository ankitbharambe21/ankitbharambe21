#include<iostream>
#include<conio.h>
using namespace std;
class operation
{
	private:
		int fact=1,n,i;
	public:
		int factorial()
		{
			cout<<"Enter number: ";
			cin>>n;
			for(i=1;i<=n;i++)
			{
				fact=fact*i;
			}
			cout<<"Factorial of "<<n<<" = "<<fact<<endl;
		}
		int fibonacci()
		{
			int n1=0,n2=1,n3,num;
			cout<<"\nEnter Number: ";
			cin>>num;
			cout<<n1<<"\t"<<n2;
			for(i=0;i<num;i++)
			{
				n3=n1+n2;
				cout<<"\t"<<n3;
				n1=n2;
				n2=n3;
			}
		}
};
int main()
{
	operation o;
	int choice,i;
	cout<<"\n1.Factorial.\n2.Fibonacci Series."<<endl;
	for(i=0;i<2;i++)
	{
		cout<<"\nEnter choice: ";
		cin>>choice;
		switch(choice)
		{
			case 1:
				o.factorial();
				break;
			case 2:
				o.fibonacci();
				break;
			default:
				cout<<"Incorrect Choice";
		}
	}
}
