#include<iostream>
using namespace std;

class Count{
	public: int count=0;
	void find(int arr[],int n){
		for(int i=0;i<n;i++){
		count++;
		}
	cout<<"The total number of elements in the array are: "<<count;
	}
};

int main(){
		int num,arr[100];
 	cout<<"Enter number of elements of array: ";
 	cin>>num;
 	cout<<"Enter the elements of array: ";
 	for(int i=0;i<num;i++){
 		cin>>arr[i];
	 }
	 Count obj;
	 obj.find(arr,num);
}
