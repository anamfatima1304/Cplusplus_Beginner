#include<iostream>
using namespace std;

int main()
{
    int number, start , end;
    cout<<"Enter Table No: "<<endl;
    cin>>number;
    cout<<"Start From: "<<endl;
    cin>>start;
    cout<<"End at: "<<endl;
    cin>>end;

    for(int a=start; a<=end; a++){
        cout<<number<<" x "<<a<<" = "<<number*a<<endl;
    }

    return 0;
}