#include<iostream>
using namespace std;

string Get_The_Word(int n){
    
    if(n==0){return "Zero";}
    if(n==1){return "One";}
    if(n==2){return "Two";}
    if(n==3){return "Three";}
    if(n==4){return "Four";}
    if(n==5){return "Five";}
    if(n==6){return "Six";}
    if(n==7){return "Seven";}
    if(n==8){return "Eight";}
    if(n==9){return "Nine";}
}
void Digits_to_Words(int number){
    int length = 0, reverse_num = 0;
    while(number>0){
        reverse_num = (10*reverse_num) + (number%10);
        length = length + 1;
        number = number / 10;
    }

    if(length>6){
        cout<<"Wrong Input"<<endl<<"please enter 6-digit or smaller number"<<endl;
    }
    else{
        while(reverse_num>0){
         cout<<Get_The_Word(reverse_num % 10);
         length = length - 1;
         reverse_num = reverse_num / 10;
         
         if(length != 0){
            cout<<" , ";
        }
        }
    }
}

int main()
{
    int number;
    cout<<"Enter a six-digit or smaller number: "<<endl;
    cin>>number;
    Digits_to_Words(number);
    
    return 0;
}