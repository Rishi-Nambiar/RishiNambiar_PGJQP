#include<iostream>
using namespace std;

class Average{
	public:
	double average(double n1,double n2,double n3,double n4,double n5){
		double avg=(n1+n2+n3+n4+n5)/5;
		return avg;
	}
	bool check(double avg){
	if(avg>100)
	return true;
	else 
	return false;	
	}
};

int main(){
	double num1,num2,num3,num4,num5,avg;
	cout<<"Enter 5 numbers: ";
	cin>>num1;
	cin>>num2;
	cin>>num3;
	cin>>num4;
	cin>>num5;
	Average obj;
	avg=obj.average(num1,num2,num3,num4,num5);
	cout<<"Average of given numbers is: "<<avg<<endl;
	if(obj.check(avg)==true)
	cout<<"Average is greater than 100.";
	else
	cout<<"Average is not greater than 100.";
	
}
