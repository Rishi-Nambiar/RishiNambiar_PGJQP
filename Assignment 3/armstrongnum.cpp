#include<iostream>
using namespace std;
class Armstrong{
	public:int orgnum,num,rem,cube,sum=0;
		void check(){
				cout<<"Enter a number:\n";
	cin>>num;
	orgnum=num;
	while(num!=0){
		rem=num%10;
		cube=rem*rem*rem;
		sum+=cube;
		num/=10;
	}
	if(orgnum==sum)
	cout<<orgnum<<" is an Armstrong number";
	else
	cout<<orgnum<<" is not an Armstrong number";
		}
};
int main(){
	Armstrong obj;
	obj.check();
	

}
