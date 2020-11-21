#include<iostream>
using namespace std;
class Replace{
	public: int i;
	void find(int arr[],int n){
		for(i=0;i<n;i++){
			if(arr[i]<0){
				arr[i]=0;
			}
			cout<<"The new array is: "<<arr[i]<<endl;
		}
		
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
	Replace obj;
	obj.find(arr,num);
}
