#include<iostream>
using namespace std;

class Circle
{
	int r;
	float area;
	public:
		void set(int x)
		{
			r=x;
		}
		float getarea()
		{
			return area;
		}
		void calculatearea()
		{
			area=3.14*r*r;
		}
};
int main()
{
	Circle c;
	c.set(8);
	c.calculatearea();
	cout<<"Area of circle is = "<<c.getarea();
}
