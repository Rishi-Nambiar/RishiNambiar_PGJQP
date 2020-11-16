#include<iostream>
using namespace std;

class Calculate{
	public:
		int num1,num2,num3,product;
	
	void multiply()
	{
		cout<<"Enter number one: ";
		cin>>num1;
		cout<<"Enter number two: ";
		cin>>num2;
		cout<<"Enter number three: ";
		cin>>num3;
		product=num1*num2*num3;
		cout<<"The product of the entered numbers are: "<<product;
		}	
};

int main()
{
	Calculate obj;
	obj.multiply();
}
