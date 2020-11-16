#include<iostream>
using namespace std;

class AddMultiply{
	public: int num1,num2,sum,product;
	void accept(){
		cout<<"Enter the first number: ";
		cin>>num1;
		cout<<"Enter the second number: ";
		cin>>num2;
	}
	void add(){
		sum=num1+num2;
	}
	void multiply(){
		product=num1*num2;
	}
	void check()
	{
		if(sum>product)
		cout<<"sum is greater than product";
		else if(sum==product)
		cout<<"sum is equal to product";
		else
		cout<<"product is greater than sum";
	}
	    
};

int main()
{
	AddMultiply obj;

obj.accept();	obj.add();
	obj.multiply();
	obj.check();

	
}
