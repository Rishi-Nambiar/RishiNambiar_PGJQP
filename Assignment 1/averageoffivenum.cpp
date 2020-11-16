#include<iostream>
using namespace std;

class Calculate{
	public:
		double num1,num2,num3,num4,num5,avg;
	
	void Average()
	{
		cout<<"Enter number one: ";
		cin>>num1;
		cout<<"Enter number two: ";
		cin>>num2;
		cout<<"Enter number three: ";
		cin>>num3;
		cout<<"Enter number four: ";
		cin>>num4;
		cout<<"Enter number five: ";
		cin>>num5;
		avg=(num1+num2+num3+num4+num5)/5.0;
		cout<<"The average of the five digits is: "<<avg;
		}	
};

int main()
{
	Calculate obj;
	obj.Average();
}
