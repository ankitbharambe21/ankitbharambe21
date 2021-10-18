#include<iostream>
#include<conio.h>
using namespace std;
class arithmatic
{
	public:
		float a,b,sum,sub,mul,div;
		
		arithmatic()
		{
			cout<<"Enter value of a and b: ";
			cin>>a>>b;
		}
		int calculation()
		{
			sum=a+b;
			sub=a-b;
			mul=a*b;
			div=a/b;
		}
		int disp()
		{
			cout<<"Addition= "<<sum<<endl;
			cout<<"Subtraction= "<<sub<<endl;
			cout<<"Multiplication= "<<mul<<endl;
			cout<<"Division= "<<div;
		}
};
int main()
{
	arithmatic a;
	a.calculation();
	a.disp();
	getch();
}
