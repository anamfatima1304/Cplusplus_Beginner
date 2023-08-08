// a C++ program that takes 6 integers and compute the sum of all the integers. For
// example:
// Input: Enter Number: 123456, Output: 21

#include<iostream>
using namespace std;

int main()
{
    int number, sum=0, newNumber, count = 0;
    cout<<"Enter 6-digit number: "<<endl;
    cin>>number;
    
    while(number!=0){
        newNumber = number % 10;
        sum = sum + newNumber;
        number = number / 10;
        count = count + 1;
    }

    if(count==6){
        cout<<"The sum is "<<sum;
    }
    else{
        cout<<"Please Enter a six-digit numbers"<<endl;
    }
    return 0;
}