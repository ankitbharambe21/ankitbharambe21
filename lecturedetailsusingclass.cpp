#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class lecture
{
	char lectname[400];
	char subname[300];
	char course[400];
	int lecnum;
	int hr;
	public:
		int lectIn()
		{
			cout<<"\nEnter lecturer Name: ";
			gets(lectname);
			cout<<"Enter Subject Name: ";
			gets(subname);
			cout<<"Enter Course Name: ";
			gets(course);
			cout<<"Enter Number of lecture: ";
			cin>>lecnum;
		}
		int lectdetail()
		{
			cout<<"Lecture Hours : ";
			cin>>hr;
		}
		int details()
		{
			cout<<"\nName of Lecturer: "<<lectname<<endl;
			cout<<"Name of Subject: "<<subname<<endl;
			cout<<"Name of Course: "<<course<<endl;
			cout<<"No. of lectures: "<<lecnum<<endl;
			cout<<"No. of Hours: "<<hr<<"hr"<<endl;
		}
};
int main()
{
	lecture l;
	l.lectIn();
	l.lectdetail();
	l.details();
	getch();
}
