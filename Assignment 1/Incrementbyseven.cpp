#include<iostream>
using namespace std;

class Increment
{
	public:
		int num;
	
	void Addseven()
	{
		cout<<"Enter a positive integer: ";
		cin>>num;
		num=num+7;
		cout<<"Incremented integer is: "<<num;
		
	}
			
};
int main()
{
	Increment obj;
	obj.Addseven();
}
