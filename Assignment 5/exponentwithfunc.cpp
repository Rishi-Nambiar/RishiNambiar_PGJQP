#include<iostream>
#include<cmath>
using namespace std;

class Power{
	public:
		float calculate(float exponent,float base){
			return pow(base,exponent);
		}
};

int main(){
	float exponent,base;
	cout<<"Enter base: ";
	cin>>base;
	cout<<"Enter exponent: ";
	cin>>exponent;
	Power obj;
	cout<<obj.calculate(exponent,base);
}
