#include<iostream>

using namespace std;

class Time
{
	private:
		int hour;
		int minute;
		int second;
	public:
		void nhap();
		void xuat();
		Time();
		void Add(Time, Time);
};

Time::Time()
{
	hour=0;
	minute=0;
	second=0;
}

void Time::nhap()
{
	
		cout<<"\nNhap gio: ";
		cin>>hour;
		cout<<"\nNhap phut: ";
		cin>>minute;
		cout<<"\nNhap giay: ";
		cin>>second;
	
}

void Time::xuat()
{
	cout<<hour<<":"<<minute<<":"<<second;
}

void Time::Add(Time a, Time b)
{
	Time kq;
	kq.second=a.second+b.second;
	if(kq.second>60)
	{
		kq.second-=60;
		kq.minute++;
	}
	kq.minute+=a.minute+b.minute;
	if(kq.minute>60)
	{
		kq.minute-=60;
		kq.hour++;
	}
	kq.hour+=a.hour+b.hour;
	if(kq.hour>12)
	{
		kq.hour-=12;
	}
	cout<<kq.hour<<":"<<kq.minute<<":"<<kq.second;
}

int main()
{
	Time a, b,c;
	a.nhap();
	a.xuat();
	b.nhap();
	b.xuat();
	cout<<"\nKet qua la: ";
	c.Add(a, b);
	return 0;
}





