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

void search(int A[], int size, int elem){
    int check = 1;
    for (int i = 0; i < size; i++)
    {
        if(A[i]==elem){
            cout<<"The element "<<elem<<" is found at the index "<<i<<endl;
            check = -1;
        }
    }
    if(check==1){
        cout<<"The element "<<elem<<" is not found in the array"<<endl;
    }
}
int main()
{
    int size = 20, elem;
    int arr[size];
    init(arr, size);
    cout<<"Enter the number you want to find in the array: "<<endl;
    cin>>elem;
    search(arr, size, elem);
    cout<<"Array:"<<endl;
    print(arr, size);
    return 0;
}