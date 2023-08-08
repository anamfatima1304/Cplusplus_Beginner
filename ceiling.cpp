#include<iostream>
using namespace std;

int convert(float a){
    return a;
}

int ceiling_integer(float a){
    if(a<0){
        return a;
    }
    return a + 1;
}

int main()
{
    float number;
    cout<<"Enter a number"<<endl;
    cin>>number;
    if(convert(number)*10==number*10){
        cout<<"The ceiling value is "<<number<<"."<<endl;
    }
    else{
    cout<<"The ceiling value is "<<ceiling_integer(number)<<endl;
    }
    return 0;
}