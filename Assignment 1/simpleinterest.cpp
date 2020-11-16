#include<iostream>
using namespace std;

class SimpleInterest{
	public:
		double principal,rate,time,SI;
	
	void Calculate()
	{
		cout<<"Enter principal: ";
		cin>>principal;
		cout<<"Enter rate: ";
		cin>>rate;
		cout<<"Enter time: ";
		cin>>time;
		SI=(principal*rate*time)/100.0;
		cout<<"The simple interest is: "<<SI;
		}	
};

int main()
{
	SimpleInterest obj;
	obj.Calculate();
}
