#include<iostream>
using namespace std;

class EvenOdd{
	public:
	void findeven(int arr[],int n){
		
		for(int i=0;i<n;i++)
		{
			if(arr[i]%2==0)
			cout<<"Even numbers are: "<<arr[i]<<endl;
		}
	}
	
	void findodd(int arr[],int n){
	
		for(int i=0;i<n;i++){
			if(arr[i]%2!=0)
			cout<<"Odd numbers are: "<<arr[i]<<endl;
		}
	}
};

int main(){
	int num,arr[100];
	cout<<"Enter number of elements in array: ";
	cin>>num;
	cout<<"Enter elements of array: ";
	for(int i=0;i<num;i++)
	{cin>>arr[i];}
	EvenOdd obj;
	obj.findeven(arr,num);
	obj.findodd(arr,num);
	
}
