#include<iostream>
using namespace std;

class Divide{
	
	public:
		int quotient,remainder,num1,num2;
	
	void calculate()
	{
		cout<<"Enter the dividend(positive non decimal value): "<<'\n';
		cin>>num1;
		cout<<"Enter the divisor(positive non decimal value): "<<'\n';
		cin>>num2;
		quotient=num1/num2;
		remainder=num1%num2;
		cout<<"The quotient is: "<<quotient<<'\n';
		cout<<"The remainder is: "<<remainder;
		}	
};

int main()
{
	Divide obj;
	obj.calculate();
}
