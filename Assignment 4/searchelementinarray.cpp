#include<iostream>
using namespace std;

class Find{
	public: int count;
	void search(int arr[],int n,int element){
		for(int i=0;i<n;i++){
		if(arr[i]==element){
		cout<<element<<" lies at position '"<<i+1<<"' in the given array"<<endl;	
		count++;
		}
		}
		cout<<"There are "<<count<<" occurence(s) of "<<element<<" in given array.";
	}
};

int main(){
	int num,arr[100],e;
 	cout<<"Enter number of elements of array: ";
 	cin>>num;
 	cout<<"Enter the elements of array: ";
 	for(int i=0;i<num;i++){
 		cin>>arr[i];
	 }
	cout<<"Enter element to be found: ";
	cin>>e;
	Find obj;
	obj.search(arr,num,e); 
}
