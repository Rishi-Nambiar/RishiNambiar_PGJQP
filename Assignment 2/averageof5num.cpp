#include<iostream>
using namespace std;

class Average{
	public: int num1,num2,num3,num4,num5,avg;
	void check(){
		cout<<"Enter 5 digits";
		cin>>num1;
		cin>>num2;
		cin>>num3;
		cin>>num4;
		cin>>num5;
		
		avg=(num1+num2+num3+num4+num5)/5;
		if(avg>10)
		cout<<"average is greater than 10";
		else
		cout<<"average is not greater than 10";
	}
};

int main(){
	Average a;
	a.check();
}
