#include<iostream>
using namespace std;

class MaxMin{
	public:
	void findmax(int arr[],int n){
		int max=arr[0];
		for(int i=0;i<n;i++)
		{
			if(arr[i]>arr[0])
			max=arr[i];
		}
		cout<<"Maximum value is: "<<max<<endl;
	}
	
	void findmin(int arr[],int n){
		int min=arr[0];
		for(int i=0;i<n;i++){
			if(arr[i]<arr[0])
			min=arr[i];
		}
		cout<<"Minimum value is: "<<min<<endl;
	}
};

int main(){
	int num,arr[100];
	cout<<"Enter number of elements in array: ";
	cin>>num;
	cout<<"Enter elements of array: ";
	for(int i=0;i<num;i++)
	{cin>>arr[i];}
	MaxMin obj;
	obj.findmax(arr,num);
	obj.findmin(arr,num);
	
}
