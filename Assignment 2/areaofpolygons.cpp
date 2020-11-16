#include<iostream>
#include<cmath>
using namespace std;

class Area{
public:
	void calculate(int n){
		
	switch(n)
	{
			case 1: 
		  float radius;
		  cout<<"Enter the radius:";
		  cin>>radius;
		  cout<<"Area of circle is: "<<(22.0/7.0)*radius*radius<<endl;
		  break;
		case 2:
			float side;
			cout<<"Enter length of side of square: ";
			cin>>side;
			cout<<"Area of square is: "<<side*side<<endl;
			break;
		case 3:
			float length,breadth;
			cout<<"Enter the length and breath of rectangle: ";
			cin>>length>>breadth;
			cout<<"Area of rectangle: "<<length*breadth<<endl;
			break;
		case 4:
			float height,base;
			cout<<"Enter the height and base of triangle: ";
			cin>>height>>base;
			cout<<"Area of triangle: "<<(height*base)/2<<endl;
			break;
		default: cout<<"Enter a valid option."<<endl;break;	
	}
}};

int main()
{ Area obj;
cout<<"Which shape do you want the area calculated of?\n1.Circle 2.Square 3.Rectangle 4.Triangle\n";
int n;
cin>>n;
obj.calculate(n);
}
