#include<iostream>
using namespace std;
class Palindrome{
	public:	int orgnum,num,rev=0,rem;
	void check()
	{cout<<"enter a number: ";
	cin>>num;
	orgnum=num;
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num/=10;
	}
	if(orgnum==rev)
	cout<<orgnum<<" is a palindrome";
	else
	cout<<orgnum<< " is not a palindrome";
	}
};
int main(){
	Palindrome obj;
	obj.check();
	
}
