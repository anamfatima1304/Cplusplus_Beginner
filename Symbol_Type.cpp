#include<iostream>
using namespace std;

int int_value(char c){
    return c;
}

string Symbol_Type(char c){
    int variable = int_value(c);
    if(variable>int_value('A')-1 && variable<int_value('Z')+1){
        return "Capital Letter";
    }

    if(variable>int_value('a')-1 && variable<int_value('z')+1){
        return "Small Letter";
    }
    return "None";
}
int main()
{
    char c;
    cout<<"Enter a letter"<<endl;
    cin>>c;
    cout<<Symbol_Type(c)<<endl;
    return 0;
}