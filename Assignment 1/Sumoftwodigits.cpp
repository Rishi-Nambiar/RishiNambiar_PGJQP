#include<iostream>
using namespace std;

class Calculate{
	public:
		int num1,num2,total;
	
	void add()
	{
		cout<<"Enter number one: ";
		cin>>num1;
		cout<<"Enter number two: ";
		cin>>num2;
		total=num1+num2;
		cout<<"The sum of the entered numbers are: "<<total;
		}	
};

int main()
{
	Calculate obj;
	obj.add();
}
