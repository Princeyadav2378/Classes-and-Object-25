/*8. Define a class Rectangle and define an instance member function to find the area of
the rectangle.*/

#include<iostream>
using namespace std;

class Rectangle
{
	private:
		int l,b,area;
	public:
		void set(int x,int y)
		{
			l=x;
			b=y;
		}
		int getarea()
		{
			return area;
		}
		void calculatearea()
		{
			area=l*b;
		}
};
int main()
{
	Rectangle r;
	r.set(10,15);
	r.calculatearea();
	cout<<"Area of Rectangle is = "<<r.getarea();
}
