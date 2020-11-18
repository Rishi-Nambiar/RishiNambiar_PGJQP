#include<iostream>
using namespace std;
class AtoZ{
	public: int i;
	void display()
	{
	for(i=0;i<=122;i++)
	{if(i>=65 && i<=90)
	cout<<char(i)<<endl;
	}
}};
int main(){
	AtoZ obj;
	obj.display();
}
