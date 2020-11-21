#include<iostream>
using namespace std;

class Add{
	public: int total[100];
	void sum(int arr1[],int arr2[],int n){
		for(int i=0;i<n;i++){
				total[i]=arr1[i]+arr2[i];
				cout<<"The sum of arrays is:|_"<<total[i]<<"_|"<<endl;
			}
		}	 
};

int main(){
		int num,arr1[100],arr2[100];
 	cout<<"Enter number of elements in the arrays: ";
 	cin>>num;
 	cout<<"Enter the elements of array 1 : ";
 	for(int i=0;i<num;i++){
 		cin>>arr1[i];
}
 	cout<<"Enter the elements of array 2 : ";
 	for(int i=0;i<num;i++){
 		cin>>arr2[i];
	 }
	Add obj;
	obj.sum(arr1,arr2,num); 
}
