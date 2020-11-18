#include<iostream>
using namespace std;

class Name{
	public:
	void iterate(char ch[10]){
		for(int i=1;i<=5;i++)
		cout<<ch<<endl;
	}
};

int main()
{
	char name[10];
	cout<<"Enter your name: ";
	cin>>name;
	Name obj;
	obj.iterate(name);
}
