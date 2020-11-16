#include<iostream>
using namespace std;

class positivenegative
{
	public: int num1;
	
	void check(){
	
	cout<<"Enter number : ";
	cin>>num1;
	if(num1>=0)
	{
		cout<<num1<<" is a positive number";
	}
	else if(num1==0)
	{
		cout<<num1<<" is zero";
	}
	else
	{
		cout<<num1<<" is a negative number";
	}
}
};

int main()
{
	positivenegative obj;
	obj.check();
}
