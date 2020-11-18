#include<iostream>
using namespace std;

class Fibonacci{
	public: int num1=0,num2=1,num3,i,num;
	void fibonacci(){
		cout<<"Enter the number of elements in the series: ";
		cin>>num;
		cout<<num1<<"\t"<<num2<<"\t";
		for(i=2;i<=num;++i)
		{
			num3=num1+num2;
			cout<<num3<<"\t";
			num1=num2;
			num2=num3;
		}
	}
};

int main(){
	Fibonacci obj;
	obj.fibonacci();
}
