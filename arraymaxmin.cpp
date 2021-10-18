#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a[10],i,max,min;
	for(i=0;i<10;i++)
	{
		cout<<"Enter Array element: ";
		cin>>a[i];
	}
	cout<<"Array: ";
	for(i=0;i<10;i++)
	{
		cout<<a[i]<<"\t";
	}
	max=min=a[0];
	for(i=0;i<10;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	cout<<"\nMax number: "<<max<<endl<<"Min Number: "<<min;
	getch();
}
