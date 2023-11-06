/*7. Define a class Greatest and define instance member function to find Largest among
3 numbers using classes.*/

#include<iostream>
using namespace std;

class Greatest
{
	private:
		
		//private member variable
		int a,b,c,max;
	public:
		
		// Setter to set the value
		void set(int x,int y,int z)
		{
			a=x;
			b=y;
			c=z;
		}
		
		// Get the greatest value
		int getmax()
		{
			return max;
		}
		
		// Calculate the greatest value
		int calculatemax()
		{
			if(a>=b && a>=c)
			{
				max=a;
			}
			else if(b>=c)
			{
				max=b;
			}
			else
			{
				max=c;;
			}
			return max;
		}
};

int main()
{
	Greatest g;
	g.set(49,35,48);
	
	g.calculatemax();
	cout<<"Get Greatest value is = "<<g.getmax();
	return 0;
}
