#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,j,r,c,a[10][10],b[12][12],s[12][12];
	cout<<"Enter Row and Column: ";
	cin>>r>>c;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<"Enter Matrix Element: ";
			cin>>a[i][j];
		}
	}
	cout<<"1st Matrix: "<<endl;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<"\n";
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<"Enter 2nd Matrix: ";
			cin>>b[i][j];
		}
	}
	cout<<"\n2nd Matrix: "<<endl;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<b[i][j]<<"\t";
		}
		cout<<"\n";
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			s[i][j]=a[i][j]+b[i][j];
		}
	}
	cout<<"\nAddition of matrix: "<<endl;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<s[i][j]<<"\t";
		}
		cout<<"\n";
	}
	getch();
}
