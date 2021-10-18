#include<iostream>
#include<conio.h>
#include<string.h>
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
			gets(booktitle);
			cout<<"Enter Author Name: ";
			gets(author);
			cout<<"Publisher Company: ";
			gets(publisher);
			cout<<"Enter Price of book: ";
			cin>>price; 
		}
		int disp()
		{
			cout<<"\nBook Name: "<<booktitle<<endl;
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
