#include<iostream>
using namespace std;

class Alphabet
{
	public: 
	char c;
	
	void check(){
		
	cout<<"Enter a character: ";
	cin>>c;	
	
	if((c >= 'a'&& c <= 'z') || (c >= 'A' && c <= 'Z')) 
	{
        cout <<c<< " is an Alphabet.";
    } 
	else 
	{
        cout <<c<< " is not an Alphabet.";
    }
}};

int main()
{
	Alphabet obj;
	obj.check();
}
