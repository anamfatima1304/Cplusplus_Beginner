//  C++ program that takes a number from the user and tell either it
// is even or odd. (User will be allowed to enter different numbers one by one until the user
// prints “-1”).
// Sample Input: 4
// Output: It is an even number.
// Sample Input: 9
// Output: It is an odd number.
#include<iostream>
using namespace std;

int main()
{
    int num1;
    cout<<"Enter a number or enter -1 to exit: "<<endl;
    cin>>num1;

    while(num1!=-1){
        if(num1%2==0){
            cout<<num1<<" is even."<<endl;
        }
        else{
            cout<<num1<<" is odd."<<endl;
        }
        cout<<"Enter a number or enter -1 to exit: "<<endl;
    cin>>num1;
    }
    return 0;
}