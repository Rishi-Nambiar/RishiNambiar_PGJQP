#include<iostream >
using namespace std;

int n;
struct student{
		char name[15];
		int roll_no;
		float marks[];
	};
	
class Student{
	public: student S;
	void accept(int n){
		for(int i=0;i<n;i++)
		{
		cout<<"Enter name: ";
		cin>>S.name;
		cout<<"Enter Roll number: ";
		cin>>S.roll_no;
		cout<<"Enter marks: ";
	    cin>>S.marks[i]; 
	}
	}
	void check(int n){
		for(int i=0;i<n;i++){
		
		if(S.marks[i]>=90.0)
		cout<<"grade A"<<endl;
		else if(S.marks[i]<90.0 && S.marks[i]>=80.0)
		cout<<" grade B"<<endl;
		else if(S.marks[i]<80.0 && S.marks[i]>=60.0)
		cout<<" grade C"<<endl;
		else if(S.marks[i]<60.0 && S.marks[i]>=45.0)
		cout<<" grade D"<<endl;
		else
		cout<<"fail"<<endl;
   }}
};

int main()
{
	 Student obj;
	 cout<<"Enter number of students to be graded: ";
	 cin>>n;
	 obj.accept(n);
	 obj.check(n);

}
