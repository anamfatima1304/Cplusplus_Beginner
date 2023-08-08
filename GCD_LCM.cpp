#include<iostream>
using namespace std;

int main()
{
    int number1, number2, HCF=0, LCM;
    bool check = true;
    cout<<"Enter first number: "<<endl;
    cin>>number1;
    cout<<"Enter second number: "<<endl;
    cin>>number2;

    // Calculating HCF of two numbers using "if-else"
    // for(int i=1; i<=number1; i++){
    //     if(number1%i==0){
    //         if(number2%i==0){
    //         HCF = i;
    //     }
    //     }
    // }

    // Calculating HCF of two numbers using only loops
    for(int i=1; i<=number1; i++){
        int k = i;
        while(number1%k==0){
            while(number2%k==0){
            HCF = i;
            k++;
        }
        k++;
        }
    }

    int i = number1;
    // Calculating LCM of two numbers using "if-else"
    // while(check == true){
    //     if(i%number1==0){
    //         if(i%number2==0){
    //             LCM = i;
    //             check = false;
    //         }
    //     }
    //     i++;
    // }

    i = number1;
    // Calculating LCM of two numbers using only loops
    while(check == true){
    int k = i;
        while(k%number1==0){
            while(k%number2==0){
            LCM = i;
            check = false;
            k++;
        }
        k++;
        }
        i++;
    }

    // Printing the LCM and HCF of the numbers
    cout<<"The LCM of "<<number1<<" and "<<number2<<" is "<<LCM<<endl;
    cout<<"The HCF of "<<number1<<" and "<<number2<<" is "<<HCF<<endl;
    return 0;
}