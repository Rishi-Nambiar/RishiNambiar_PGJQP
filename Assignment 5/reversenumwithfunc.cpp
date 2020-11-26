#include<iostream>
using namespace std;

class Number{
	public: int rem,rev=0;
		void reverse(int num)
		{for(int i=1;num!=0;i++){
		rem=num%10;
		rev=rev*10+rem;
		num/=10;
		}
		cout<<rev<<" is the reverse of the given number.";
		}
};

int main(){
	int num;
	cout<<"Enter a number: ";
	cin>>num;
	Number obj;
	obj.reverse(num);
}
