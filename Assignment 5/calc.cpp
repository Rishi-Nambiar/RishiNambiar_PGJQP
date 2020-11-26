# include <iostream>
using namespace std;
class Calculator{
	public:
	Calculator(char ch,float num1,float num2){
		switch(ch)
    {
        case '+': cout << num1+num2<<endl;break;
        case '-': cout << num1-num2<<endl;break;
        case '*': cout << num1*num2<<endl;break;
        case '/': cout << num1/num2<<endl;break;
        default: cout << "Enter a valid operator"<<endl;break;
    }
}
};
int main()
{
    char option;
    float num1, num2;
    cout<<"Enter operator either + or - or * or /: ";
    cin>>option;
    cout<< "Enter number one: ";
    cin>>num1;
    cout<<"Enter number two: ";
    cin>>num2;
Calculator obj(option,num1,num2);

    
}
