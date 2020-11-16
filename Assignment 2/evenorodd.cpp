#include<iostream>
using namespace std;

class OddEven
{
	public: int num;
	
	void check(){
	
	cout<<"Enter a number: ";
	cin>>num;
	if(num%2==0)
	{
		cout<<"The number is even";
	}
	
	else
	{
		cout<<"The number is odd";
	}
}
};

int main()
{
	OddEven obj;
	obj.check();
}
