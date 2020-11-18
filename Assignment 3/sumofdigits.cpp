#include<iostream>
using namespace std;
class Sum{
	public:int num,rem,sum=0;
		void sum()
		{	
	cout<<"Enter a number: ";
	cin>>num;
	while(num!=0){
		rem=num%10;
		sum+=rem;
		num/=10;
	}
	cout<<"The sum of digits is: "<<sum;
		}
};
int main(){
Sum obj;
obj.sum();
}
