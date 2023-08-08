// C++ program that takes a number from user and prints the factorial of that number.

#include<iostream>
using namespace std;

void factorial(int & a){
    int b = a;
    a = 1;
    for(int i=1; i<=b; i++){
        a = a * i;
    }
}

int main()
{
    int a;
    cout<<"Enter the number you want to find the factorial of?"<<endl;
    cin>>a;
    factorial(a);
    cout<<"The factorial is "<<a<<endl;
    return 0;
}