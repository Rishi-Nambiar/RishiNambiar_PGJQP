#include<iostream>
using namespace std;

class Arraymultiple{
	public:
		void multipy(int arr[],int n){
		for(int i=0;i<n;i++){
			cout<<arr[i]*2;
		}	
		}
};

int main(){
	int num,arr[num];
	cout<<"Enter number of elements in array: ";
	cin>>num;
    Arraymultiple obj;
	for(int i=0;i<num;i++){
		cin>>arr[i];
	}
	obj.multipy(arr,num);
	
}
