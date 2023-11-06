/* 5. Define a class ReverseNumber and define an instance member function to find
Reverse of a Number using class*/

#include<iostream>
using namespace std;

class ReverseNumber
{
	private:
		
		//private member variable
		
		int Actualnumber;   
		int Reversenumber;
	public:
		
		//Setter Function
		
		void setActualnumber(int x)   
		{
			Actualnumber=x;
		}
		//Getter Function
		
		int getActualnumber()       
		{
			return Actualnumber;
		}
		
		int getReversenumber()
		{
			return Reversenumber;
		}
		
		// Calcute reverse number
		int CalculateReversenumber()
		{
			int Reverse=0,rem;
			int temp=Actualnumber;
			
			while(temp!=0)
			{
				rem=temp%10;
			    Reverse=Reverse*10+rem;
			    temp=temp/10;
			}
			Reversenumber=Reverse;
		}
};

int main()
{
	ReverseNumber r;
	r.setActualnumber(123);
	r.CalculateReversenumber();
	cout<<"Acual number is: = "<<r.getActualnumber()<<endl;
	cout<<"Reverse number is: = "<<r.getReversenumber()<<endl;
	return 0;
}
