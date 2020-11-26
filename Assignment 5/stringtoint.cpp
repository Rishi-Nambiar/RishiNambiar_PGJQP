#include<iostream>
#include<cstdlib>
using namespace std;

class Convert{
    char ch[20];
	int num;
	public:
		void accept(){
		cout<<"Enter a string: ";
		cin>>ch;
		}
		int change(){
			num=atoi(ch);
				cout<<"The integer is: "<<num;
		}
};

int main(){
	Convert c1;
	c1.accept();
	c1.change();
}
