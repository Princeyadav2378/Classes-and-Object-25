#include<iostream>
using namespace std;

class factorial
{
	private:
		int n;
		int fact;
		
	public:
		void setN(int x)
		{
			n=x;
		}
		int getN()
		{
			return n;
		}
		int getfactorial() 
		{
			return fact;
		}
		void calculatefactorial()
		{
			int f=1,i;
			if(n<=0)
			{
				fact=1;
				return;
			}
			for(i=1;i<=n;i++)
			{
				f=f*i;
			}
			fact=f;
		}
};
int main()
{
	factorial f;
	f.setN(5);
	f.calculatefactorial();
	cout<<"factorial of "<<f.getN()<<" is "<<f.getfactorial();
	
	return 0;

}
