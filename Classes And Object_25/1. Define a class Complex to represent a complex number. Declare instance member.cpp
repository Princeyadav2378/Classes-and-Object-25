#include<iostream>
using namespace std;

class Complex
{
	private:
		int real;
		int img;
	public:
		void set(int x,int y)
		{
			real=x;
			img=y;
		}
		void showdata()
		{
			cout<<"Real "<<real<<" + "<<"img "<<img<<"i"<<endl;
		}
};

int main()
{
	Complex c1,c2;
	c1.set(2,8);
	c2.set(12,5);
	c1.showdata();
	c2.showdata();
	cout<<endl;
}
