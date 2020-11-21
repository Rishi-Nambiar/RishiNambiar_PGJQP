#include<iostream>
using namespace std;
#define M 100
 class Multiply{
 	public: int prod[M];
 	void product(int arr1[],int arr2[],int n){
 		cout<<"The product of both arrays is: "<<endl;
 		for(int i=0;i<n;i++){
 		prod[i]=arr1[i]*arr2[i];
		 cout<<prod[i]<<endl;	
		}
	 }
 };
 
 int main(){
 	int arr1[M],arr2[M],num;
 	cout<<"Enter number of elements in array: ";
 	cin>>num;
 	cout<<"Enter elements in array1 : ";
 	for(int i=0;i<num;i++){
	cin>>arr1[i]; 
	}
	cout<<"Enter elements in array2 : ";
 	for(int i=0;i<num;i++){
	cin>>arr2[i]; 
	}
	Multiply obj;
	obj.product(arr1,arr2,num);
 }
