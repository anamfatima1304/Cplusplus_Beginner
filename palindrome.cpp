// a C++ program that takes a number of any size from the user and prints its reverse
// number and check if it is a palindrome or not.

#include<iostream>
using namespace std;

void reverse(int & a){
    int b = a;
    a = 0;
    while(b!=0){
        a = (a*10)+(b%10);
        b=b/10;
    }
}

void palindrome(int a){
    int b = a;
    reverse(a);
    if(a==b){
        cout<<"The number "<<a<<" is a palindrome."<<endl;
    }
    else{
        cout<<"The number "<<a<<" is not a palindrome."<<endl;
    }
}
int main()
{
    int a,b;
    cout<<"Enter the number: "<<endl;
    cin>>a;
    b = a;
    reverse(a);
    cout<<"The reverse number is "<<a<<endl;
    palindrome(a);
    return 0;
}