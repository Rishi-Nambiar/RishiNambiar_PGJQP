#include<iostream>
using namespace std;
class Table{
	public:int num,i=1;
		void display(){
				cout<<"enter the number: ";
	cin>>num;
	cout<<"the table of "<<num<<" is: "<<endl;
	while(i<=10){
		cout<<i*num<<endl;
		i++;
	}
		}
};
int main(){
Table obj;
obj.display();
}
