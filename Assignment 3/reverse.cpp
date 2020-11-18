#include<iostream>
using namespace std;
class Reverse{
	public:int num,rev=0,rem;
		void reverse(){
			cout<<"enter a number: ";
	cin>>num;
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num/=10;
	}
	cout<<"the reverse of the number is: "<<rev;
		}
};
int main(){
	Reverse obj;
	obj.reverse();
	
}
