#include<iostream>

using namespace std;

class NhanVien
{
	private:
		int ID;
		float BaoHiem;
		int Thamnien;
	public:
		void Nhap();
		void Xuat();
		float TBT();
};

void NhanVien::Nhap()
{
	cout<<"\nNhap ma nhan vien: ";
	cin>>ID;
	cout<<"\nNhap bao hiem: ";
	cin>>BaoHiem;
	cout<<"\nNhap tham nien: ";
	cin>>Thamnien;
}
float NhanVien::TBT()
{	float s=BaoHiem;
	for(int i=1; i<=Thamnien; i++)
	{
		s+=s*0.055;
	}
	return s;
}

void NhanVien::Xuat()
{
	cout<<"\nID: "<<ID;
	cout<<"\nBao hiem: "<<BaoHiem;
	cout<<"\nTham nien: "<<Thamnien<<endl;
	cout<<TBT();
}



int main()
{
	NhanVien x1;
	x1.Nhap();
	x1.TBT();
	x1.Xuat();
	NhanVien x2;
	x2.Nhap();
	x2.TBT();
	x2.Xuat();
	NhanVien x3;
	x3.Nhap();
	x3.TBT();
	x3.Xuat();
	return 0;
}


