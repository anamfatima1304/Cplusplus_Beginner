// a C++ program that takes numbers from the user one by one until the user enters
// “-1” and output the maximum, minimum, 2nd maximum and 2nd minimum number from them.

#include<iostream>
using namespace std;

void print(int max, int min, int second_max, int second_min){
    cout<<"The maximum value is "<<max<<endl;
    cout<<"The minimum value is "<<min<<endl;
    cout<<"The second maximum value is "<<second_max<<endl;
    cout<<"The second minimum value is "<<second_min<<endl;
}

void max_min(int a, int & max, int & min, int & second_max, int & second_min){
    if(a>max){
        second_max = max;
        max = a;
    }
    else if(a>second_max){
        second_max = a;
    }

    if(a<min){
        second_min = min;
        min = a;
    }
    else if(a<second_min){
        second_min = a;
    }

}

int main()
{
    int a;
    int max=-65535, min=65535, second_max=-65535, second_min = 65535;

    while(1){
    cout<<"Enter the number or Enter '-1' to exit "<<endl;
    cin>>a;
    if(a==-1){break;}
    max_min(a, max, min, second_max, second_min);
    }
    
    print(max, min, second_max, second_min);
    return 0;
}