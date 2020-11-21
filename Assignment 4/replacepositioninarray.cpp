#include<iostream>
using namespace std;
class Replace{
	public: int i;
	void find(int arr[],int n,int position,int newvalue){
		for(i=0;i<n;i++){
		arr[position-1]=newvalue;	
		cout<<"The new array is: "<<arr[i]<<endl;
		}
		
	}
};

int main(){
	int num,arr[100],pos,newvalue;
 	cout<<"Enter number of elements of array: ";
 	cin>>num;
 	cout<<"Enter the elements of array: ";
 	for(int i=0;i<num;i++){
 		cin>>arr[i];
	 }
	 cout<<"Enter the position which is needed to be replaced: ";
	 cin>>pos;
	 cout<<"Enter the new value: ";
	 cin>>newvalue;
	Replace obj;
	obj.find(arr,num,pos,newvalue);
}
