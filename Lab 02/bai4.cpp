#include<iostream>

using namespace std;

struct PhanSo
{
	int tu;
	int mau;
};

PhanSo a, b;
void Tong(PhanSo a, PhanSo b)
{
	PhanSo kq;
	if(a.mau==b.mau)
	{
		kq.tu=a.tu+b.tu;
		kq.mau=a.mau;
	}
	else
	{
		kq.tu=a.tu*b.mau+a.mau*b.tu;
		kq.mau=a.mau*b.mau;
	}
	cout<<kq.tu<<"/"<<kq.mau;
}

void Hieu(PhanSo a, PhanSo b)
{
	PhanSo kq;
	if(a.mau==b.mau)
	{
		kq.tu=a.tu-b.tu;
		kq.mau=a.mau;
	}
	else
	{
		kq.tu=a.tu*b.mau-a.mau*b.tu;
		kq.mau=a.mau*b.mau;
	}
		cout<<kq.tu<<"/"<<kq.mau;
}

void Tich(PhanSo a, PhanSo b)
{
	PhanSo kq;
	kq.tu=a.tu*b.tu;
	kq.mau= a.mau*b.mau;
		cout<<kq.tu<<"/"<<kq.mau;
}

void Thuong(PhanSo a, PhanSo b)
{
	PhanSo kq;
	kq.tu=a.tu*b.mau;
	kq.mau=a.mau*b.tu;
		cout<<kq.tu<<"/"<<kq.mau;
}

int main()
{
	
	char x,luachon;
	do
	{
	do
	{
		cout<<"Nhap vao so a: "<<endl;
		cin>>a.tu>>a.mau;
		cout<<"Nhap vao so b: "<<endl;
		cin>>b.tu>>b.mau;
	}while(a.mau==0 || b.mau==0);
	cout<<"So a = "<<a.tu<<"/"<<a.mau<<endl;
	cout<<"So b = "<<b.tu<<"/"<<b.mau<<endl;
	cout<<"Enter operator: ";
	cin>>x;
	switch(x)
	{
		case '+':
			Tong(a, b);
			break;
		case '-':
			Hieu(a, b);
			break;
		case '*':
			Tich(a, b);
			break;
		case '/':
			Thuong(a, b);
			break;
	}
	cout<<endl;
	cout<<"Do another (y/n)?"<<endl;
	cin>>luachon;
	}while(luachon=='y');
	system("pause");	
	return 0;
}


