#include<iostream>
using namespace std;
class Number{
	public:int num,rem,i=0;
		void calculate(){
			cout<<"Enter a number: ";
	cin>>num;
	while(num!=0){
		rem=num%10;
		i++;
		num/=10;
	}
	cout<<"The number of digits are: "<<i;
		}
};
int main(){
	Number obj;
	obj.calculate();
	
}
