#include<iostream>
using namespace std;

 class Sum100{
 	public: int num1,num2;
	 void check(){
 		cout<<"Enter number one";
 		cin>>num1;
 		cout<<"Enter number two";
 		cin>>num2;
 		if((num1+num2)>100)
 		cout<<"The sum is greater than 100";
 		else if((num1+num2)==100)
 		cout<<"The sum is equal to 100";	
 		else
 		cout<<"The sum is not greater than 100";
	 }
 };
 
 int main()
 {
 	Sum100 obj;
 	obj.check();
 }
