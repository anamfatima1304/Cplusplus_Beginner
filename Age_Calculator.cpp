// C++ program that is an “Age Calculator (Calculates your total
// age)”. It takes input as your date of birth and then takes the input of your expected “date
// of death” and in the output gives the total age you lived. (Just for coding purposes,
// nothing to deal with real life).
//  Your Year of Birth Must be after 1990 up till Now 2023.
//  Your Year of Death Must be after 2023 up till 2099.
//  You can use all the programming knowledge studied until now in the class.
//  Just for your hint: keep in mind the dates of different months (Some have 30, 31,
// and 28 and for lap year 29).
#include<iostream>
using namespace std;

int main()
{
    int day_birth, month_birth, year_birth, day_death, month_death, year_death, day_age , month_age , year_age;

while (true){
    cout<<"Enter your date of birth: D-M-Y"<<endl;
    cin>>day_birth;
    cin>>month_birth;
    cin>>year_birth;

    if(day_birth<0 || ((month_birth==1 || month_birth==3 || month_birth==5 || month_birth==7 || month_birth==8 || month_birth==10 || month_birth==12) && day_birth>31) || ((month_birth==4 || month_birth==6 || month_birth==9 || month_birth==11) && day_birth>30) || (month_birth==2 && year_birth%4!=0 && day_birth>29) || (month_birth==2 && year_birth%4==0 && day_birth>28) || month_birth<1 || month_birth>12 || year_birth<1990 || year_birth>2023){
        cout<<"Please Enter valid birth date."<<endl;
    }

    else{
        break;
    }
    }

    while (true){
    cout<<"Enter your date of death: D-M-Y"<<endl;
    cin>>day_death;
    cin>>month_death;
    cin>>year_death;

    if(day_death<0 || ((month_death==1 || month_death==3 || month_death==5 || month_death==7 || month_death==8 || month_death==10 || month_death==12) && day_death>31) || ((month_death==4 || month_death==6 || month_death==9 || month_death==11) && day_death>30) || (month_death==2 && year_death%4!=0 && day_death>29) || (month_death==2 && year_death%4==0 && day_death>28) || month_death<1 || month_death>12 || year_death<2023 || year_death>2099){
        cout<<"Please Enter valid death date."<<endl;
    }

    else{
        break;
    }
    }
    
    // 1, 3, 5, 7, 8, 10, 12  == 31 Days
    // 4, 6, 9, 11 == 30 Days
    // 2 either 28 or 29
    
    int i=month_birth-1, day = 29;
    
    if(i==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==12){
        day = 31;
    }
    else if(i==4 || i==6 || i==9 || i==11){
        day = 30;
    }
    else if(i==2 && year_death%4!=0){
        day = 28;
    }

    if (day_birth > day_death) {
        day_death = day_death + day;
        month_death = month_death - 1;
    }
  
    if (month_birth > month_death) {
        year_death = year_death - 1;
        month_death = month_death + 12;
    }
  
    // calculate date, month, year
    day_age = day_death - day_birth;
    month_age = month_death - month_birth;
    year_age = year_death - year_birth;
  
    cout<<"Age = "<<day_age<<"-"<<month_age<<"-"<<year_age<<endl;

    return 0;
}