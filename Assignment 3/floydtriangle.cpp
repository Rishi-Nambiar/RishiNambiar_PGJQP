#include<iostream>
using namespace std;

class FloydTriangle{
	public: int num=1;
		void print(int n){
			for(int i=1;i<=n;i++){
				for(int j=1;j<=i;j++)
				{
				cout<<num<<" ";
				num++;
			}cout<<endl;
			}
			
		}
};

int main(){
	int num;
	cout<<"Enter the number of rows: ";
	cin>>num;
	FloydTriangle obj;
	obj.print(num);
}
