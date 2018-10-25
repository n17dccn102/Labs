#include<iostream>

using namespace std;

float Tien(float goc, int sonam, float lai)
{
	for(int i=1; i<=sonam; i++)
	{
		goc= goc* (float) (lai/100)+goc;
	}
	return goc;
}

int main()
{
	float goc;
	int sonam;
	float lai;
	cout<<"\nNhap so tien goc: "; cin>>goc;
	cout<<"\nNhap so nam gui: "; cin>>sonam;
	cout<<"\nNhap lai: "; cin>>lai;
	cout<<"\nKet qua la: "<<Tien(goc, sonam, lai);
	return 0;
}
