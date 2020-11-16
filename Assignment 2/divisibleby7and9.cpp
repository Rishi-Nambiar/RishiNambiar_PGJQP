#include<iostream>
using namespace std;

class Divisible{
	
	public:
	void check7(int num){
		if(num%7==0)
		{
			cout<<"The number is divisible by 7"<<endl;
		}
		else
		cout<<"This number is not divisible by 7"<<endl;
	}
	
	void check9(int num){
		if(num%9==0)
		{
			cout<<"This number is divisible by 9"<<endl;
		}
		else
		cout<<"This number is not divisible by 9"<<endl;
	}
};

int main()
{
	int n;
	cout<<"Enter a number: ";
	cin>>n;
	Divisible d;
	d.check7(n);
	d.check9(n);
}
