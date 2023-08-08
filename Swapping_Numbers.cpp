#include<iostream>
using namespace std;

void print(int a, int b){
    cout<<"The first value is "<<a<<endl;
    cout<<"The second value is "<<b<<endl;
}

void swap(int & a, int & b){
    int c;
    c = a;
    a = b;
    b = c;
}

int main()
{
    int a, b;
    cout<<"Enter the values of a and b "<<endl;
    cin>>a>>b;
    cout<<"Before Swapping: "<<endl;
    print(a, b);
    swap(a, b);
    cout<<"After Swapping: "<<endl;
    print(a, b);
    return 0;
}