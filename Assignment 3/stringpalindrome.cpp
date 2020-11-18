#include<iostream>
#include<string.h>
using namespace std;

int main(){
	char ch[20];
	cout<<"Enter a string: ";
	cin>>ch;
	if(ch==(strrev(ch)))
	cout<<"The entered string is a palindrome.";
	else
	cout<<"This string is not a palindrome.";
}
