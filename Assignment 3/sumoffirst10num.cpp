#include<iostream>
using namespace std;
class Sum{
	public: 	int i,sum=0;
	void display()
	{for(i=1;i<=10;i++)
{sum+=i;
}
cout<<sum;
	}
};
int main(){
Sum obj;
obj.display();
}
