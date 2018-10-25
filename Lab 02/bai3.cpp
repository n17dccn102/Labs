#include<iostream>
#include<string.h>

using namespace std;

float Tong(float a, float b)
{
	return a+b;
}

float Hieu(float a, float b)
{
	return a-b;
}

float Tich(float a, float b)
{
	return a*b;
}

float Thuong(float a, float b)
{
	return a/b;
}

void Caculator(float a, float b)
{
	char x;
	cout<<"\nEnter first number, operator, second number: ";
	cin>>a>>x>>b;
	switch(x)
	{
		case '+':
		  {
			cout<<"\n"<<a<<"+"<<b<<": "<<Tong(a, b)<<endl;
			break;
		  }
		case '-':
			{
			cout<<"\n"<<a<<"-"<<b<<": "<<Hieu(a, b)<<endl;
			break;
			}
		case '*':
			{
			cout<<"\n"<<a<<"*"<<b<<": "<<Tich(a, b)<<endl;
			break;
			}
		case '/':
			{
			cout<<"\n"<<a<<"/"<<b<<": "<<Thuong(a, b)<<endl;
			break;
			}		
	}
}

int main()
{
	float a, b;
	char luachon;
	do
	{
		 Caculator(a, b);
		 cout<<"\nDo another (y/n)?:";
		 cin>>(luachon);
	}while(luachon=='y');
	return 0;
}
