
// C++ program that uses a structure to store information about a person and then
// displays that information. The program defines a “Person’s” structure with name, age, and address
// as its members. It prompts the user to enter this information, and then it displays the entered details.

#include<iostream>
using namespace std;

struct Person{
    string name;
    int age;
    string address;
};

int main()
{
    Person Person1;
    cout<<"Enter your name"<<endl;
    cin>>Person1.name;
    cout<<"Enter your age"<<endl;
    cin>>Person1.age;
    cout<<"Enter your address"<<endl;
    cin>>Person1.address;
    cout<<"The name of the person is "<<Person1.name<<endl<<"The age is "<<Person1.age<<endl<<"The address is "<<Person1.address<<endl;
    return 0;
}