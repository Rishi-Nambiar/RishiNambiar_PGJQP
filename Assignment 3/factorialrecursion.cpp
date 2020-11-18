#include<iostream>
using namespace std;
class Factorial{
public:
int factorial(int n)
{
	if(n>=1){	
     return (n*factorial(n-1));
     
    }
    else
    return 1;
}
};
int main()
{
	Factorial obj;
	int num;
	cout<<"enter a number: ";
	cin>>num;
	cout<<obj.factorial(num);
}
