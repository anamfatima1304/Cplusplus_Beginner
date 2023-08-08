// Write a function which takes as input a floating number and returns its floor value. Test it using main
// function on different values.
// Sample Input: 5.5
// Output: 5
// Sample Input: -5.5

#include<iostream>
using namespace std;

int convert(float a){
    return a;
}

int floor_integer(float a){
    if(a>0){
        return a;
    }
    return a - 1;
}

int main()
{
    float number;
    cout<<"Enter a number"<<endl;
    cin>>number;
    if(convert(number)==number*10){
        cout<<"The floor value is "<<convert(number)<<"."<<endl;
    }
    else{
    cout<<"The floor value is "<<floor_integer(number)<<"."<<endl;
    }
    return 0;
}