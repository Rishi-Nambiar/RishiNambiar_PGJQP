#include<iostream>
using namespace std;

class LeapYear{
	
	public: int year;
	void check()
	{
		cout<<"Enter the year: ";
		cin>>year;
		if((year%4==0 && year%100!=0)||(year%400==0))
		cout<<year<<" is a leap year";
		else
		cout<<year<<" is not a leap year";
	}
};

int main()
{
	LeapYear obj;
	obj.check();
}
