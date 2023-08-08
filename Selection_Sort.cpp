// a C++ program that initializes the array of size 50 with random values and then
// apply “Selection Sort” discussed in the class to sort all the values in the array and print them.

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

void swap(int A[],int index,int i){
        int temp;
        temp = A[i];
        A[i] = A[index];
        A[index] = temp;
}

void minim(int A[], int & min, int & index, int size, int i){
    for (int j = i; j < size; j++)
        {
           if(A[j]<min){
                min = A[j]; index = j;
           }
        }
}
void Selection_Sort(int A[], int size){
    int min, index;
    for (int i = 0; i < size; i++)
    {
        min = A[i]; index = i;
        minim(A, min, index, size, i);
        swap(A, index, i);
    }
    
}

int main()
{
    int size = 50;
    int arr[size];
    init(arr, size);
    cout<<"Before Sorting:"<<endl;
    print(arr, size);
    Selection_Sort(arr, size);
    cout<<"After Sorting:"<<endl;
    print(arr, size);
    return 0;
}