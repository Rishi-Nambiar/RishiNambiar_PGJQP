#include<iostream>
using namespace std;

class GreaterThan
{
	public: int num;
	
	void check(){
	
	cout<<"Enter a number: ";
	cin>>num;
	if(num>10)
	{
		cout<<"The number is greater than 10";
	}
	
	else
	{
		cout<<"The number is smaller than 10";
	}
}
};

int main()
{
	GreaterThan obj;
	obj.check();
}
