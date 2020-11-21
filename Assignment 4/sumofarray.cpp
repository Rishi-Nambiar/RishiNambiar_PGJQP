#include<iostream>
using namespace std;

class Sum{
	public: int sum=0;
	void calculate(int arr[],int n){
		for(int i=0;i<n;i++){
			sum=sum+arr[i];
		}
	cout<<"The sum of elements is: "<<sum;
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
	Sum obj;
	obj.calculate(arr,num); 
}
