#include<iostream>
using namespace std;

class Greateroftwo
{
	public: int num1,num2;
	
	void check(){
	
	cout<<"Enter number one: ";
	cin>>num1;
	cout<<"Enter number two: ";
	cin>>num2;
	if(num1>num2)
	{
		cout<<num1<<" is greater than "<<num2;
	}
	
	else
	{
		cout<<num1<<" is smaller than "<<num2;
	}
}
};

int main()
{
	Greateroftwo obj;
	obj.check();
}
