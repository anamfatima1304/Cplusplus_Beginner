//  C++ program that gives the output using For Loops
#include<iostream>
using namespace std;

int main()
{
    char c;
    int n;

    cout<<"Enter the chracter you want to print: "<<endl;
    cin>>c;
    cout<<"Enter the number of lines: "<<endl;
    cin>>n;

    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            cout<<c;
        }
        for(int j=0; j<(i*2); j++){
            cout<<" ";
        }
        for(int j=i; j<n; j++){
            cout<<c;
        }
    cout<<endl;
    }

    return 0;
}