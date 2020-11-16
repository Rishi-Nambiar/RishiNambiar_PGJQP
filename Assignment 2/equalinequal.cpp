#include<iostream>
using namespace std;

class EqualityInequality
{
	public: int num1,num2;
	
	void check(){
	
	cout<<"Enter number one: ";
	cin>>num1;
	cout<<"Enter number two: ";
	cin>>num2;
	if(num1==num2)
	{
		cout<<"Both numbers are equal";
	}
	
	else
	{
		cout<<"Both numbers are inequal";
	}
}
};

int main()
{
	EqualityInequality obj;
	obj.check();
}
