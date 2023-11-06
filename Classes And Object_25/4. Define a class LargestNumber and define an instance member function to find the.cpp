/*4. Define a class LargestNumber and define an instance member function to find the
Largest of two Numbers using the class.*/
#include<iostream>
using namespace std;

class Largest
{
	private:
		int a,b,largest;
	public:
		void setab(int x ,int y)
		{
			a=x;
			b=y;
		}
		int geta()
		{
			return a;
		}
		int getb()
		{
			return b;
		}
		
		int getlargest()
		{
			return largest;
		}
		void calculatelargest()
		{
			if(a>b)
			largest=a;
			else 
			largest=b;
		}
};
int main()
{
	Largest l1;
	l1.setab(10,12);
	l1.calculatelargest();
	
	cout<<"The largest number "<<l1.geta()<<" and "<<l1.getb()<<" is = "<<l1.getlargest()<<endl;
}

