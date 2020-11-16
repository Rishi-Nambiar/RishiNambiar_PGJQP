#include<iostream>
using namespace std;

int main()
{
	char ch;
	cout<<"Enter the character:";
	cin>>ch;
	if(ch>=65 && ch<=90)
	{
		cout<<"character is in uppercase";
	}
	
	else if(ch>=97 && ch<=122)
	{
		cout<<"character is in lowercase";
	}
	
	else if(ch>=48 && ch<=57)
	{
		cout<<"character is a digit";
	}
	
	else
	{
		cout<<"character is a special character";
	}
}
