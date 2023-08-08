#include<iostream>
using namespace std;

int main()
{
    int number;
    cout<<"Enter a number: "<<endl;
    cin>>number;

    cout<<"The numbers are :"<<endl;
    for(int i=1; i<=number; i++){
        cout<<i;
    }
    return 0;
}