#include<iostream>
using namespace std;

void init(int A[], int size){
    int elem;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter element "<<i+1<<" in the array"<<endl;
        cin>>elem;
        A[i] = elem;
    }
}

void print(int A[], int size){
    for (int i = 0; i < size; i++)
    {
        cout<<A[i]<<"  ";
    }
    cout<<endl;
}

int prime_num(int num){
    if(num==0 || num==1){
        return -1;
    }
    for (int i = 2; i < num; i++)
    {
        if(num%i==0){
            return -1;
        }
    }
    return 1;
}

void check_prime(int A[], int size){
    int check = 1;
    for (int i = 0; i < size; i++)
    {
        if(prime_num(A[i])==1){
            cout<<A[i]<<" is a prime nmber at index "<<i<<"."<<endl;
            check = -1;
        }
    }
    if(check==1){
        cout<<"There is no prime number in the array."<<endl;
    }
}
int main()
{
    int size = 10;
    int arr[size];
    init(arr, size);
    check_prime(arr, size);
    cout<<"Array:"<<endl;
    print(arr, size);
    return 0;
}