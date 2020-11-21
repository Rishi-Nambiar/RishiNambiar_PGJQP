#include<iostream>
using namespace std;
#define M 100
#define N 100

class Multipy{
	public: int total[100][100];
		void product(int r,int c,int arr1[M][N],int arr2[M][N]){
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++){
				total[i][j]=arr1[i][j]*arr2[i][j];
				cout<<"The product of the matrices is: "<<"(Index)"<<i+1<<j+1<<"\t-"<<total[i][j]<<endl;
			}
		}
        }
};

int main(){
		int rows,columns,arr1[100][100],arr2[100][100];
 	cout<<"Enter number of rows of the matrices: ";
 	cin>>rows;
 	cout<<"Enter number of columns of the matrices: ";
 	cin>>columns;
 	cout<<"Enter the elements of matrix 1: ";
 	for(int i=0;i<rows;i++){
 		for(int j=0;j<columns;j++){ 
 		cin>>arr1[i][j];
 	    }
	}
	cout<<"Enter the elements of the matrix 2: ";
	for(int i=0;i<rows;i++){
		for(int j=0;j<columns;j++){
		cin>>arr2[i][j];
		}
	}
	Multipy obj;
	obj.product(rows,columns,arr1,arr2);
}
