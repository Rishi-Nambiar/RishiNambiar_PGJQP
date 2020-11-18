#include<iostream>
using namespace std;
class EvenNum{
	public:int i=1;
		void display()
		{do{
	if(i%2==0)
	cout<<i<<endl;
	i++;
} while(i<=20);
		}
};
int main(){
EvenNum obj;
obj.display();

}
