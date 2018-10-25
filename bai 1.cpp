#include<iostream>
#include<string>

using namespace std;

struct Phone
{
	string arecode;
	string exchange;
	string number;
};

void Display(void)
{
	struct Phone x;
	struct Phone y; // Phone cua ban
	y.arecode="212";
	y.exchange="767";
	y.number="8900";
	do
	{
		cout<<"Enter your are code, exchange, and number: ";
		cin>>x.arecode>>x.exchange>>x.number;
		cout<<"\nMy number is: ("<<y.arecode<<") "<<y.exchange<<"-"<<y.number<<endl;
		cout<<"\nYour number code is: ("<<x.arecode<<") "<<x.exchange<<"-"<<x.number<<endl;
	}while(true);
}

int main()
{
	Display();
	return 0;
}
