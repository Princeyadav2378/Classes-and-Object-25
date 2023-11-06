/*2. Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate
number of instance member variables and also define instance member functions to
set values for time and display values of time.
*/

#include<iostream>
using namespace std;

class Time
{
	private:
		int hour,min,sec;
	public:
		void set(int x,int y,int z)
		{
			hour=x;
			min=y;
			sec=z;
		}
		void showdata()
		{
			cout<<hour<<" hour "<<min<<" min "<<sec<<" sec ";
		}
};
int main()
{
	Time c1;
	c1.set(5,45,9);
	c1.showdata();
	cout<<endl;
}
