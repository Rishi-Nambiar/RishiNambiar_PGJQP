#include<iostream>
using namespace std;

class Pointer{
	public:
	int num1,num2,*n1,*n2,sum;
	void accept(){
		cout<<"Enter number one: ";
		cin>>num1;
		cout<<"Enter number two: ";
		cin>>num2;
		n1=&num1;
		n2=&num2;
	}
	void display(){
		sum=*n1+*n2;
		cout<<"The sum is: "<<sum;
	}
};

int main(){
	Pointer p;
	p.accept();
	p.display();
}
