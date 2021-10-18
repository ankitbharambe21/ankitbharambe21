#include<iostream>
#include<conio.h>
using namespace std;
class book
{
	char booktitle[400];
	char author[100];
	char publisher[200];
	int price;
	public:
		int dataIn()
		{
			cout<<"Enter Book Name: ";
			cin>>booktitle;
			cout<<"Enter Author Name: ";
			cin>>author;
			cout<<"Publisher Company: ";
			cin>>publisher;
			cout<<"Enter Price of book: ";
			cin>>price; 
		}
		int disp()
		{
			cout<<"Book Name: "<<booktitle<<endl;
			cout<<"Author: "<<author<<endl;
			cout<<"Publisher Name: "<<publisher<<endl;
			cout<<"Price: "<<price<<endl;
		}
};
int main()
{
	book b;
	b.dataIn();
	b.disp();
	getch();
}
