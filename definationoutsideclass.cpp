#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class employee
{
	public:
		char name[300];
		int empid,age;
		float salary,gpay,hra,da,gross;
		int getdata();
		float calculate();
		int display();
};
int employee::getdata()
{
	cout<<"Enter Name Of Employee: ";
	gets(name);
	cout<<"Enter Employee ID: ";
	cin>>empid;
	cout<<"Enter Employee Age: ";
	cin>>age;
	cout<<"Enter Employee Basic Pay: ";
	cin>>salary;
	cout<<"Enter Grade Pay: ";
	cin>>gpay;
}
float employee::calculate()
{
	hra=salary*0.16;
	da=salary*0.28;
	gross=salary+hra+da+gpay;
}
int employee::display()
{
	cout<<"\nEmployee ID: "<<empid<<endl;
	cout<<"Employee Name: "<<name<<endl;
	cout<<"Employee Age: "<<age<<endl;
	cout<<"HRA: "<<hra<<endl;
	cout<<"DA: "<<da<<endl;
	cout<<"Grade Pay: "<<gpay<<endl;
	cout<<"Gross Salary: "<<gross<<endl;
}
int main()
{
	employee e1;
	e1.getdata();
	e1.calculate();
	e1.display();
	getch();
}
