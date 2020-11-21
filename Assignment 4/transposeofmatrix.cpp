#include<iostream>
using namespace std;

#define MAX 100

 class Transpose{
 	public: int transpose[MAX][MAX];
 	void trans(int r,int c,int arr[MAX][MAX]){
 		cout<<"Original Matrix:"<<endl;
 		for(int i=0;i<r;i++){
 			for(int j=0;j<c;j++){
 				transpose[j][i]=arr[i][j];
				 cout<<" "<<arr[i][j];
				 if(j==c-1)
				 cout<<endl<<endl;		
			 }
		 }
		 cout<<"Transposed Matrix:"<<endl;
		for(int i=0;i<c;i++){
			for(int j=0;j<r;j++){
				cout<<" "<<transpose[i][j];
				if(j==r-1)
				cout<<endl<<endl;
			}
		} 
	 }
 };
 
 int main(){
 	int arr[MAX][MAX],rows,columns;
 	cout<<"Enter number of rows in the matrix: ";
 	cin>>rows;
 	cout<<"Enter number of columns in the matrix: ";
 	cin>>columns;
 	for(int i=0;i<rows;i++){
 		for(int j=0;j<columns;j++){
 			cout<<"Enter index"<<i+1<<j+1<<" of the matrix: ";
 			cin>>arr[i][j];
		 }
	 }
 	Transpose obj;
 	obj.trans(rows,columns,arr);
 }
