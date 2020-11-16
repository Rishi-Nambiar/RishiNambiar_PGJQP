#include<iostream>
using namespace std;

class VowelConsonant{
	public: char ch;
	void check(){
		cout<<"Enter any alphabet: ";
		cin>>ch;
		if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
		cout<<ch<<" is a vowel";
		else
		cout<<ch<<" is a consonant";
	}
	
};

int main()
{
	VowelConsonant obj;
	obj.check();
}
