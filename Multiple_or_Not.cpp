// C++ program that reads two integers and then uses the
// conditional expression operator to print either “multiple” or “not” according to whether
// one of the integers is a multiple of the other.
// Sample Input: 12 6
// Output: 12 is the multiple of 6
// Sample Input: 12 13
// Output: NON
#include<iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout<<"Enter first number: "<<endl;
    cin>>num1;
    cout<<"Enter second number: "<<endl;
    cin>>num2;

    if(num1%num2==0){
        cout<<num1<<" is the multiple of "<<num2<<"."<<endl;
    }
    
    else if(num2%num1==0){
        cout<<num2<<" is the multiple of "<<num1<<"."<<endl;
    }

    else{
        cout<<"NON"<<endl;
    }
    return 0;
}