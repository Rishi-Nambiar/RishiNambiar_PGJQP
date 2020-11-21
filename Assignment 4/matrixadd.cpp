#include<iostream>
using namespace std;
#define M 100
#define N 100

class Add{
	public: int total[100][100];
		void sum(int r,int c,int arr1[M][N],int arr2[M][N]){
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++){
				total[i][j]=arr1[i][j]+arr2[i][j];
				cout<<"The sum of the matrices is: "<<total[i][j]<<endl;
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
	Add obj;
	obj.sum(rows,columns,arr1,arr2);
}
