#include<iostream>
using namespace std;

int main()
{
    int a=0, b=1, c;
    int num1;
    cout<<"Enter a number "<<endl;
    cin>>num1;
    cout<<a<<"  ";
    cout<<b<<"  ";
    while(b<num1){
        c = a + b;
        a = b;
        b = c;
        cout<<b<<"  ";  
    }
    return 0;
}