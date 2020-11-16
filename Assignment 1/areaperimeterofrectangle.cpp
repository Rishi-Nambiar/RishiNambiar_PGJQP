#include<iostream>
using namespace std;

class CalculateArea{
	public:
		double length,breadth,area,perimeter;
	
	void AreaPerimeter()
	{
		cout<<"Enter length of rectangle: ";
		cin>>length;
		cout<<"Enter breadth of rectangle: ";
		cin>>breadth;
		area=length*breadth;
		perimeter=2.0*(length+breadth);
		cout<<"The area of the rectangle is: "<<area<<'\n';
		cout<<"The perimeter of the rectangle is: "<<perimeter;
		}	
};

int main()
{
	CalculateArea obj;
	obj.AreaPerimeter();
}
