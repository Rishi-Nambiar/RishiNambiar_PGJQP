#include<iostream>
using namespace std;

class Address{
	public:
		int num=123;
		void address(){
			cout<<"The address of num is: "<<&num;
		}
};

int main(){
	Address a;
	a.address();
}
