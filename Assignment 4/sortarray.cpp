#include<iostream>
using namespace std;
 class Sort{
 	public: int temp,i;
 	void arrange(int arr[],int n){
 		for(i=0;i<n;i++){
 			for(int j=i+1;j<n;j++){
 				if(arr[j]>arr[i]){
 					temp=arr[i];
 					arr[i]=arr[j];
 					arr[j]=temp;
				 }
			 }
		 cout<<"The array in descending order: "<<arr[i]<<endl;}
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
	Sort obj;
	obj.arrange(arr,num); 
 }
