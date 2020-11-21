#include<iostream>
using namespace std;

class EvenOdd{
	public:int even,odd;
		void evencount(int arr[],int n){
		for(int i=0;i<n;i++){
			if(arr[i]%2==0)
			{
				even++;
			}
		}
		cout<<"The even elements are: "<<even<<endl;	
		}
		void oddcount(int arr[],int n){
		for(int i=0;i<n;i++){
			if(arr[i]%2!=0){
				odd++;
			}
		}
		cout<<"The odd elements are: "<<odd<<endl;	
		}
};

int main(){
	int num,arr[100];
	cout<<"Enter the number of elements in the array: ";
	cin>>num;
	cout<<"Enter the elements of the array: ";
	for(int i=0;i<num;i++){
		cin>>arr[i];
	}
	EvenOdd obj;
	obj.evencount(arr,num);
	obj.oddcount(arr,num);
	
}
