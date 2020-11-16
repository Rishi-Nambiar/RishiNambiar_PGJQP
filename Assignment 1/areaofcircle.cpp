#include<iostream>
using namespace std;

class CalculateArea{
	public:
		double radius,area;
	
	void Area()
	{
		cout<<"Enter radius of circle: ";
		cin>>radius;
		area=(22.0/7.0)*radius*radius;
		cout<<"The area of the square is: "<<area;
		}	
};

int main()
{
	CalculateArea obj;
	obj.Area();
}
