#include<iostream>
using namespace std;

void init(int A[], int size){
    for (int i = 0; i < size; i++)
    {
        A[i] = rand()%100;
    }
}

void print(int A[], int size){
    for (int i = 0; i < size; i++)
    {
        cout<<A[i]<<"  ";
    }
    cout<<endl;
}

int maxim(int A[], int size){
    int max = A[0];
    for (int i = 0; i < size; i++)
    {
        if(A[i]>max){
            max = A[i];
        }
    }
    return max;
}

int minim(int A[], int size){
    int min = A[0];
    for (int i = 0; i < size; i++)
    {
        if(A[i]<min){
            min = A[i];
        }
    }
    return min;
}

int main()
{
    int size = 20;
    int arr[size];
    init(arr, size);
    cout<<"Array:"<<endl;
    print(arr, size);
    cout<<"The maximum value is "<<maxim(arr, size)<<endl;
    cout<<"The minimum value is "<<minim(arr, size)<<endl;
    return 0;
}