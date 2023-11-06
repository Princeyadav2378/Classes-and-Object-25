/*6. Define a class Square to find the square of a number and write a C++ program to
Count number of times a function is called.*/

#include<iostream>
using namespace std;

class Square
{
	private:
		int n;
		int square;
	public:
		
		// Setter the value to access member variable
		void setn(int x)
		{
			n=x;
		}
		int getsquare()
		{
			return n;
		}
		void calculatesquare()
		{
			
			square=n*n;
		}
};
int main()
{
	Square s;
	s.setn(5);
	s.calculatesquare();
	cout<<"alculateSquare"<<s.getsquare()<<" " <<s.getcalculatesquare();
	
}}
