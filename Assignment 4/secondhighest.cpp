#include<iostream>
using namespace std;
 class SecondHighest{
 	public: int temp,i;
 	 int arrange(int arr[],int n){
 		for(i=0;i<n;i++){
 			for(int j=i+1;j<n;j++){
 				if(arr[j]<arr[i]){
 					temp=arr[i];
 					arr[i]=arr[j];
 					arr[j]=temp;
				 }
			 }
		}
		 return arr[i];
	 }
	 
	void find(int arr[],int n){
		arrange(arr,n);
		cout<<"the second highest element is: "<<arr[n-2];
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
	 SecondHighest obj;
	 obj.arrange(arr,num);
	 obj.find(arr,num);
 }
