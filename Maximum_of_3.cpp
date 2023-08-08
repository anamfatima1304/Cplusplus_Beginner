// C++ program that takes three numbers as an input and prints the
// maximum number from them using If-Else statements.
// Sample Input: 12 45 7
// Output: The Maximum number is 45.
#include<iostream>
using namespace std;

int main()
{
    int num1, num2, num3;
    cout<<"Enter first number: "<<endl;
    cin>>num1;
    cout<<"Enter second number: "<<endl;
    cin>>num2;
    cout<<"Enter third number: "<<endl;
    cin>>num3;

    if(num1>num2){
        if(num1>num3){
            cout<<num1<<" is the maximum number."<<endl;
        }
    }

    if(num2>num1){
        if(num2>num3){
            cout<<num2<<" is the maximum number."<<endl;
        }
    }

    if(num3>num1){
        if(num3>num2){
            cout<<num3<<" is the maximum number."<<endl;
        }
    }

    if(num1==num2){
        if(num2==num3){
            cout<<"The numbers are Equal."<<endl;
        }
    }
    return 0;
}