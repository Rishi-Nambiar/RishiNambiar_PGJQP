#include<iostream>
using namespace std;

class Greaterofthree
{
	public: int num1,num2,num3;
	
	void check(){
	
	cout<<"Enter number one: ";
	cin>>num1;
	cout<<"Enter number two: ";
	cin>>num2;
	cout<<"Enter number three: ";
	cin>>num3;
	if(num1>num2 && num1>num3)
	{
		cout<<num1<<" is the greatest";
	}
	
	else if(num2>num1 && num2>num3)
	{
		cout<<num2<<" is the greatest";
	}
	
	else
	{
		cout<<num3<<" is the greatest";
	}
}
};

int main()
{
	Greaterofthree obj;
	obj.check();
}
