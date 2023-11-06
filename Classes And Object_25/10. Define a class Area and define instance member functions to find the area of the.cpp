/*10. Define a class Area and define instance member functions to find the area of the
different shapes like square, rectangle , circle etc*/

#include<iostream>
using namespace std;

class Area
{
	private:
		float length,breath;
		int side,radius;
	public:
		void setside(int a)
		{
			side=a;
		}
		void setlengthbreath(float a,float b)
		{
			length=a;
			breath=b;
		}
		void setradius(int a)
		{
			radius=a;
		}
		float areaofRectangle()
		{
			return length*breath;
		}
		int areaofSquare()
		{
			return side*side;
		}
		float areaofcircle()
		{
			return 3.14*radius*radius; 
		}
};
int main()
{
	Area a;
	a.setradius(4);
	a.setlengthbreath(10,15);
	a.setside(5);
	
	
	cout<<"Area of circle = "<<a.areaofcircle()<<endl;
	cout<<"Area of Rectangle = "<<a.areaofRectangle()<<endl; 
	cout<<"Area of Radius = "<<a.areaofSquare()<<endl;
	
}
