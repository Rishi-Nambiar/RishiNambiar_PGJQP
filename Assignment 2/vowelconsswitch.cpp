#include<iostream>
using namespace std;

class VowelConsonant{
	public: char ch;
	
	void accept(){
	cout<<"Enter a character from the alphabets: ";
	cin>>ch;
	}
	void check(){
		switch(ch)
		{
			case 'a': cout<<"character is a vowel.";break;
			case 'A': cout<<"character is a vowel.";break;
			case 'e': cout<<"character is a vowel.";break;
			case 'E': cout<<"character is a vowel.";break;
			case 'i': cout<<"character is a vowel.";break;
			case 'I': cout<<"character is a vowel.";break;
			case 'o': cout<<"character is a vowel.";break;
			case 'O': cout<<"character is a vowel.";break;
			case 'u': cout<<"character is a vowel.";break;
			case 'U': cout<<"character is a vowel.";break;
			default: cout<<"character is a consonant.";break;
		}
	}
};

int main()
{
	VowelConsonant obj;
	obj.accept();
	obj.check();
}
