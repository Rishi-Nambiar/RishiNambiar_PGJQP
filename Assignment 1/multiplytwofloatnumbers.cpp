#include<iostream>
using namespace std;

class Calculate{
	public:
		float num1,num2,product;
	
	void multiply()
	{
		cout<<"Enter number one: ";
		cin>>num1;
		cout<<"Enter number two: ";
		cin>>num2;
		product=num1*num2;
		cout<<"The product of the entered numbers are: "<<product;
		}	
};

int main()
{
	Calculate obj;
	obj.multiply();
}
