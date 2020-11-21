#include<iostream>
using namespace std;

 class Reverse{
 	public:
 		void reverse(int arr[],int n)
 		{int i=arr[n-1];
 		{for(;i>=0;--i)
		 cout<<arr[i]<<endl;
		 }
		 }
 };
 
 int main(){
 	int num,arr[100];
 	cout<<"Enter number of elements in array: ";
 	cin>>num;
 	cout<<"Enter elements of array: ";
 	for(int i=0;i<num;i++){
	 cin>>arr[i];
	 }
 	Reverse obj;
 	obj.reverse(arr,num);
 }
