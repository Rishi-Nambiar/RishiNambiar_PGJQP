# include <iostream>
using namespace std;

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

    switch(option)
    {
        case '+': cout << num1+num2;break;
        case '-': cout << num1-num2;break;
        case '*': cout << num1*num2;break;
        case '/': cout << num1/num2;break;
        default: cout << "Enter a valid operator";break;
    }
}
