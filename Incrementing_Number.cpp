// C++ program that takes a number from the user and increment it one by one until
// the user enters “-1”.

#include<iostream>
using namespace std;

void increment(int & a){
    a = a + 1;
}
int main()
{
    int a,b;
    cout<<"Enter the number that you want to increment "<<endl;
    cin>>a;
    while(b!=-1){
    increment(a);
    cout<<"The incremented value is "<<a<<endl;
    cout<<"Enter -1 to stop or any other number to conitnue"<<endl;
    cin>>b;
    }

    cout<<"The final incremented value is "<<a<<endl;
    return 0;
}