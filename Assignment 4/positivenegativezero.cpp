#include<iostream>
using namespace std;

class PosNegZero{
	public:int pos,neg,zer;
		void positive(int arr[],int n){
		for(int i=0;i<n;i++){
			if(arr[i]>0)
			{
				pos++;
			}
		}
		cout<<"The positive elements are: "<<pos<<endl;	
		}
		void negative(int arr[],int n){
		for(int i=0;i<n;i++){
			if(arr[i]<0){
				neg++;
			}
		}
		cout<<"The negative elements are: "<<neg<<endl;	
		}
		void zero(int arr[],int n){
		for(int i=0;i<n;i++){
			if(arr[i]==0){
				zer++;
			}
		}	
		cout<<"The elements which are zero are: "<<zer<<endl;
		}
};

int main()
{
	int num,arr[100];
	cout<<"Enter the number of elements in the array: ";
	cin>>num;
	cout<<"Enter the elements of the array: ";
	for(int i=0;i<num;i++){
		cin>>arr[i];
	}
	PosNegZero obj;
	obj.positive(arr,num);
	obj.negative(arr,num);
	obj.zero(arr,num);
}
