#include<iostream>
using namespace std;

class VoteEligibility
{
	public: int age;
	char name[10];
	
	void check(){
	
	cout<<"Enter name: ";
	cin>>name;
	cout<<"Enter age: ";
	cin>>age;
	if(age>=18)
	{
		cout<<name<<" is eligible for voting.";
	}
	
	else
	{
		cout<<name<<" has to wait "<<18-age<<" years to be eligible.";
	}
}
};

int main()
{
	VoteEligibility obj;
	obj.check();
}
