// C++ program that takes a number from the user and prints either
// it is a prime number or not using loops and If-Else statements. (User will be allowed to
// enter different numbers one by one until the user prints “-1”).
// Sample Input: 7
// Output: It is a prime number.
// Sample Input: 4
// Output: It is not a prime number.
#include<iostream>
using namespace std;

int main()
{
    int num1;
    cout<<"Enter a number or enter -1 to exit: "<<endl;
    cin>>num1;
    while(num1!=-1){
    int prime = 1;
    if(num1<2)
        prime = 0;
    else{
        for(int i=2; i<num1; i++){
            if(num1%i==0){
                prime = 0;
            }
        }
    }
    
    if(prime==1){
        cout<<num1<<" is a prime number."<<endl;
    }
    else{
        cout<<num1<<" is not a prime number."<<endl;
    }

    cout<<"Enter a number or enter -1 to exit: "<<endl;
    cin>>num1;
    }
    return 0;
}