#include<iostream>
#include<string.h>
#include<math.h>

using namespace std;

//Ham chuyen doi tu thap phan sang nhi phan
void Cau_a(float &n)
{
	do
	{
	cout<<"\nNhap gia tri n: ";
	cin>>n;
	}while(n<0);
	int a[100], i=0;
	int tam = n/1;
	float x = n - tam;
	while(tam>0)
	{
		a[i]=tam%2;
		i++;
		tam/=2;	
	}
	cout<<"\nKet qua la: ";
	for(int j=i-1; j>=0; j--)
	{
		cout<<a[j];
	}
	
	
	int b[100], k=0;
	x = x*2;
	while(x>0&&x<2)
	{
	int temp= x/1;	
	b[k]=temp;
	k++;
	x = x - temp;
	x = x*2;
	}
	
	cout<<".";
	for(int i=0; i<k; i++)
	{
		cout<<b[i];
	}

}

//Ham chuyen doi tu thap phan sang thap luc phan
void Cau_b(float &n)
{
	do
	{
	cout<<"\nNhap gia tri n: ";
	cin>>n;
	}while(n<0);
	int a[100], i=0;
	char b[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	int tam = n/1;
	float x = n - tam;
	while(tam>0)
	{
		a[i]=tam%16;
		i++;
		tam = tam/16;
	}
	for(int j=i-1; j>=0; j--)
	{
		cout<<b[a[j]];
	}
	
	cout<<".";
	int c[1000], k=0;
	x = x*16;
	while(x>0&&x<16)
	{
		int tam = x/1;
		c[k] = tam;
		k++;
		x = x - tam;
		x = x * 16;
	}
	for(int i=0; i<k; i++)
	{
		cout<<b[c[i]];
	}
}

//Ham chuyen doi tu so nhi phan sang thap phan
void Cau_c(float &x)
{
	cout<<"\nNhap so nhi phan x: ";
	cin>>x;
	int n = x/1;
	float k = x - n;
	cout<<n<<endl;
	cout<<k;
	
	int s=0, i=0, tam;
	while(n!=0)
	{
		tam = n%10;
		s+= tam*pow(2,i);
		i++;
		n=n/10;
	}

	while(k!=int(k))
	{
		k = k * 10;
	}
	cout<<k;
}

int main()
{
	float n;
//	Cau_a(n);
//	cout<<endl;
//	Cau_b(n);
	Cau_c(n);
	return 0;	
}
