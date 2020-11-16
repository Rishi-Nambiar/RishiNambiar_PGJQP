#include<iostream>
using namespace std;

class Increment
{
	public:
		int num;
	
	void Addone()
	{
		cout<<"Enter a positive integer: ";
		cin>>num;
		num=num+1;
		cout<<"Incremented integer is: "<<num;
		
	}
			
};
int main()
{
	Increment obj;
	obj.Addone();
}
