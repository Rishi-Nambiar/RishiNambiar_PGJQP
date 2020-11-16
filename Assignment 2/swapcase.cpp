#include<iostream>
using namespace std;

int main()
{
	char ch;
	cout<<"Enter a alphabet: ";
	cin>>ch;
	
	if(ch>=65 && ch<=90)
	{
		int d=int(ch)+32;
		cout<<char(d);
	}
	
	else if(ch>=97 && ch<=122)
	{
		int d=int(ch)-32;
		cout<<char(d);
	}
}
