//  C++ program that gives the shapes using For Loops
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
        for(int j=0; j<n-1-i; j++){
            cout<<" ";
        }
        for(int j=0; j<(i*2)+1; j++){
            cout<<c;
        }
    cout<<endl;
    }

    for(int i=n-1; i>=0; i--){
        for(int j=0; j<n-1-i; j++){
            cout<<" ";
        }

        for(int j=0; j<(i*2)+1; j++){
            cout<<c;
        }
        cout<<endl;
        
    }
    
    return 0;
}