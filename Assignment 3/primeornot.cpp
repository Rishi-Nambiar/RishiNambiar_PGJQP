#include<iostream>
using namespace std;

class Prime{
	public:
		void check(int num){
		for(int i=2;i<=num/2;i++)
		{if(num%i==0)
		cout<<num<<" is not a prime number";
		else
		cout<<num<<" is a prime number";break;
			}	
		}
};

int main(){
	int num;
	cout<<"Enter a number: ";
	cin>>num;
	Prime obj;
	obj.check(num);
}
