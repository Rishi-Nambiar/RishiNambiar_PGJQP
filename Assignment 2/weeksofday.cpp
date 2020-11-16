#include<iostream>
using namespace std;

class DaysofWeek{
	public: int num;
	
	void accept(){
	cout<<"Enter a number from 1 to 7: ";
	cin>>num;
	}
	void check(){
		switch(num)
		{
			case 1: cout<<"Sunday.";break;
			case 2: cout<<"Monday.";break;
			case 3: cout<<"Tuesday.";break;
			case 4: cout<<"Wednesday.";break;
			case 5: cout<<"Thursday.";break;
			case 6: cout<<"Friday.";break;
			case 7: cout<<"Saturday.";break;
			default: cout<<"enter a number from 1 to 7.";break;
		}
	}
};

int main()
{
	DaysofWeek obj;
	obj.accept();
	obj.check();
}
