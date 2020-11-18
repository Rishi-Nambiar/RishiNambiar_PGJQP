#include<iostream>
using namespace std;
class Factorial{
	public:int num,i,factorial;
		void calculate(){
			cout<<"Enter a number: ";
	cin>>num;
	for(i=num;i!=0;i--)
	{
		factorial*=i;
	}
	cout<<"The factorial is: "<<factorial;
		}
};
int main(){
	Factorial obj;
	obj.calculate();
}
