#include<iostream>
using namespace std;

class SwapTwo{
	public: int num1,num2,temp;
	void accept()
	{
		cout<<"Enter first number:";
		cin>>num1;
		cout<<"Enter second number:";
		cin>>num2;
		
	}
	
	void swap()
	{
		temp=num1;
		num1=num2;
		num2=temp;
	}
	
	void display()
	{
		cout<<num1<<endl;
		cout<<num2;
	}
};

int main()
{
	SwapTwo obj;
	obj.accept();
	obj.swap();
	obj.display();
}
