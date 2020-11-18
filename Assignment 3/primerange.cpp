#include<iostream>
using namespace std;

class PrimeRange{
	public: int i,j;
	void check(int l,int r){
		for(i=l;i<=r;i++){
			int flag=1;
			for(j=2;j<=i/2;++j)
			{if(i%j==0)
			flag=0;
			}
			if(flag==1)
			cout<<i<<endl;
		}	
	}
};

int main(){
	int num1,num2;
	cout<<"Enter number one: ";
	cin>>num1;
	cout<<"Enter number two: ";
	cin>>num2;
	PrimeRange obj;
	obj.check(num1,num2);
}
