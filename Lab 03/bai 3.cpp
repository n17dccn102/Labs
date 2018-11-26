#include<iostream>

using namespace std;

class serial
{
	private:
		int id;
		static int number;
	public:
		serial()
		{
			number++;
			id=number;
		}
		static void solanTao()
		{
			cout<<number<<endl;
		}
		void in()
		{
			cout<<this->id<<endl;
		}
};

int serial::number=0;
int main()
{
	serial s;
	s.in();
	serial::solanTao();
	serial s1;
	s1.in();
	serial::solanTao();
	return 0;
}
