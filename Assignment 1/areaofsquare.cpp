#include<iostream>
using namespace std;

class CalculateArea{
	public:
		double side,area;
	
	void Area()
	{
		cout<<"Enter side of square: ";
		cin>>side;
		area=side*side;
		cout<<"The area of the square is: "<<area;
		}	
};

int main()
{
	CalculateArea obj;
	obj.Area();
}
