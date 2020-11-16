#include<iostream>
#include<cmath>
using namespace std;

class RootsofEquation{
	
	public : float a,b,c,x1,x2;
	void acceptcoefficients()
	{
		cout<<"Enter coefficient of x^2";
		cin>>a;
		cout<<"Enter coefficient of x";
		cin>>b;
		cout<<"Enter constant";
		cin>>c;
	}
	
	void calculate()
	{
		int d=(b*b)-(4.0*a*c);
		x1=(-b+sqrt(d))/(2.0*a);
		x2=(-b-sqrt(d))/(2.0*a);
		
	}
	
	void display()
	{
		cout<<"the roots of the given equation are "<<x1<<" and "<<x2;
	}
};

int main()
{
	RootsofEquation e1;
	e1.acceptcoefficients();
	e1.calculate();
	e1.display();
	
}
