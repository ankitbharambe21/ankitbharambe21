#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a[6]={25,26,24,21,20,30};
	int i,ele,flag;
	cout<<"Enter Array Elements: ";
	cin>>ele;
	for(i=0;i<6;i++)
	{
		if(a[i]==ele)
		{
			flag=i+1;
			break;
		}
		else
		{
			flag=0;
		}
	}
	if(flag!=0)
	{
		cout<<ele<<" found at "<<i<<endl;
	}
	else
	{
		cout<<ele<<" Not found";
	}
	getch();
}
