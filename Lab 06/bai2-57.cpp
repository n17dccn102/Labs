#include<iostream>
#include<string>
#include<string.h>
#include<iomanip>
#include<fstream>
#define MAX 100
using namespace std;

struct sinhvien
{
	int maso;
	char ho[30];
	char ten[30];
};
typedef struct sinhvien SinhVien;

//Khai bao cau truc 1 danh sach tuyen tinh
struct list
{
	int n;
	SinhVien a[MAX];
};
typedef struct list List;

//ham kiem tra ma sinh vien
bool MSV(int ma, List &l, int &vt)
{
	bool kt=false;
	for(int i=0; i<l.n; i++)
	{
		if(ma==l.a[i].maso)
		{
			vt=i;
			kt=true;
			break;
		}
	}
	return kt;
	
}
//Ham kiem tra chuoi
bool Ktra(char s[])
{
	if(strlen(s)==0) return false;
	for(int i=0; i<strlen(s); i++)
	{
		if(s[i]<65||s[i]>122)
		{
			return false;
		}
	}
	return true;
}

void Nhap(SinhVien &x, bool &m)
{
	
	int MSSV;
	cout<<"\nNhap ma sinh vien: ";
	cin>>MSSV;
	if(MSSV<=0)
	{
		return;
	}
	else
	{
		x.maso = MSSV;
		m = true;
	}
	do
	{
		cout<<"\nNhap ho cua sinh vien: ";
		fflush(stdin);
		gets(x.ho);
	}while(!Ktra(x.ho));
	
	do
	{
		cout<<"\nNhap ten sinh vien: ";
		fflush(stdin);
		gets(x.ten);
	}while(!Ktra(x.ten));	
}

void Xuat(SinhVien x)
{
	cout<<setw(15)<<x.maso<<setw(15)<<x.ho<<setw(15)<<x.ten;
	cout<<endl;	
}

//Ham nhap danh sach sinh vien
void Nhap_ds(List &l)
{
	int ds;
	cout<<"\nNhap so sinh vien: ";
	cin>>ds;
	for(int i=0; i<ds; i++)
	{
		bool m = false;
		cout<<"\n\t\tSINH VIEN THU "<<i+1;
		Nhap(l.a[l.n], m);
		if (m){
			l.n++;
			}
	}
}

//Ham xuat danh sach sinh vien
void Xuatds(List l)
{
	if(l.n==0)
	{
		cout<<"\nDanh sach ko co phan tu nao!";
	}
	else
	{
		cout<<"\n\t\tDANH SACH SINH VIEN"<<endl;
		cout<<endl;
		cout<<setw(15)<<"STT"<<setw(15)<<"MA"<<setw(15)<<"HO"<<setw(15)<<"TEN"<<endl;
		int dem=0;
		for(int i=0; i<l.n; i++)
		{
			cout<<setw(15)<<i+1;
			Xuat(l.a[i]);
			dem+=1;
		}
		cout<<setw(21)<<"Tong So: "<<dem;
	}
}

//Ham sap xep danh sach
void Xepds(List &l)
{
	for(int i=0; i<l.n; i++)
	{
		for(int j=i+1; j<l.n; j++)
		{
			if(stricmp(l.a[i].ten, l.a[j].ten)>0)
			swap(l.a[i], l.a[j]);
			else if(stricmp(l.a[i].ten, l.a[j].ten)==0)
			{
				if(stricmp(l.a[i].ho, l.a[j].ho)>0)
				{
					swap(l.a[i], l.a[j]);
				}
			}
		}
	}		
}

//Ham them sinh vien vao danh sach
void Them(List &l)
{
	SinhVien x;
	bool m=false;
	cout<<"\nNhap thong tin sinh vien can them: ";
	Nhap(x, m);
	l.a[l.n]=x;
	l.n++;
	//Xepds(l);
}

//Ham in thong tin sinh vien can tim kiem
void In(List &l)
{
	int ma;
	do
	{
	cout<<"\nNhap ma sinh vien can tim: ";
	cin>>ma;
	}while(ma<=0);
	int vt;
	bool kt = MSV(ma, l, vt);
	if(kt)
	{
		cout<<"Da tim thay sinh vien!"<<endl;
		cout<<setw(15)<<"MA"<<setw(14)<<"HO"<<setw(14)<<"TEN"<<endl;
		Xuat(l.a[vt]);
	}
	else
	{
		cout<<"\nKhong tim thay!!";
		return;
	}
}

//Ham xoa thong tin sinh vien
void Xoa(List &l)   
{
	int ma;
	do
	{
	cout<<"\nNhap ma sinh vien can xoa: ";
	cin>>ma;
	}while(ma<=0);
	int vt;
	bool kt = MSV(ma, l, vt);
	if(kt)
	{
		for(int i=vt+1; i<l.n; i++)
		{
			l.a[i-1]=l.a[i];
		}
		l.n--;
	}
	else
		{
			cout<<"\nKhong tim thay sinh vien de xoa!!";
		}
}

//ham luu danh sach sinh vien vao file DSHV.TXT
void Ghi_File(List &l)
{
	ofstream f("C:\\Users\\LENOVO\\Desktop\\DSSV.TXT");
	f<<l.n<<endl;
	for(int i=0; i<l.n; i++)
	{
		f<<l.a[i].maso<<"  ";
		f<<l.a[i].ho<<"  ";
		f<<l.a[i].ten;
		f<<endl;
	}
	f.close();
}

//Ham load lai file vao danh sach tuyen tinh
void Doc_File(List &l)
{
	ifstream f("C:\\Users\\LENOVO\\Desktop\\DSSV.TXT");
	f>>l.n;
	for(int i=0; i<l.n; i++)
	{
		f>>l.a[i].maso;
		f>>l.a[i].ho;
		f>>l.a[i].ten;
	}
	f.close();
	
}


int main()
{
	List l;
	l.n=0;
	int luachon;
	while(69)
	{
		system("cls");
		cout<<"\n\t\t=============MENU==============\n";
		cout<<"\n\t1. Nhap danh sach sinh vien.";
		cout<<"\n\t2. Xuat danh sach sinh vien.";
		cout<<"\n\t3. Sap xep danh sach tang dan theo ten.";
		cout<<"\n\t4. Them 1 sinh vien vao danh sach.";
		cout<<"\n\t5. In thong tin sinh vien can tim.";
		cout<<"\n\t6. Xoa sinh vien theo ma.";
		cout<<"\n\t7. Luu danh sach sinh vien vao file.";
		cout<<"\n\t8. Load danh sach sinh vao dstt";
		cout<<"\n\t0.Thoat.";
		cout<<"\n\t\t=============END===============\n";
		cout<<"\nNhap lua chon: ";
		cin>>luachon;
		switch(luachon)
		{
			case 1:
				{
					Nhap_ds(l);
					break;
				}
			case 2:
				{
					Xuatds(l);
					system("pause>NULL");
					break;
				}
			case 3:
				{
					Xepds(l);
					break;
				}
			case 4:
				{
					Them(l);
					break;
				}
			case 5:
				{
					In(l);
					system("pause>NULL");
					break;
				}
			case 6:
				{
					Xoa(l);
					system("pause>NULL");
					break;
				}
			case 7:
				{
					Ghi_File(l);
					break;
				}
				
			case 8:
				{
					Doc_File(l);
					break;
				}
			case 0:
				exit(1);
		}
	}
	return 0;
}
