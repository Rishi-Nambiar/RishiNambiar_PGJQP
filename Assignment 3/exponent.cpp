#include<iostream>
using namespace std;
class Exponent{
	public: int exponent;
	float result=1,base;
		void calculate(){
			cout<<"Enter the base:\n";
	cin>>base;
	cout<<"Enter the exponent:\n";
	cin>>exponent;
	while(exponent!=0){
		result*=base;
		exponent--;
	}
	cout<<result;
		}
};
int main(){
Exponent obj;
obj.calculate();
}
