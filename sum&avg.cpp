#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,b,sum;
	float avg;
	cout<<"\nEnter Two Number: ";
	cin>>a>>b;
	sum=a+b;
	avg=(float)sum/2;
	cout<<"\nSum= "<<sum<<endl<<"\nAverage= "<<avg<<endl;
	getch();
}
