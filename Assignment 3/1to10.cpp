#include<iostream>
using namespace std;
class OnetoTen{
	public:int i=1;
		void display()
		{
				while(i<=10)
	{
		cout<<i<<endl;
		i+=1;
	}
		}
};
int main(){
	OnetoTen obj;
	obj.display();

}	
