#include<iostream>
#include<string>
#include<cstring>
using namespace std;

class Len{
	public:
	string length(string ch){
		return ch.size();
	}
};

int main(){
	string str;
	cout<<"Enter a string: ";
    getline(cin,str);
	Len obj;
	cout<<"Length of entered string is: "<<obj.length(str);
}
