// Write a program which will first print the circle with a certain radius R in the middle of the
// screen using the circle’s equation x
// 2 + y
// 2 = R2 and then compute the x and y using their
// parametric equation with respect to Theta. x = rCos and y = rSin. 

#include<iostream>
#include<windows.h>
#include<conio.h>
#include<cmath>

using namespace std;

void gotoRowCol(int rpos, int cpos)
{
	int xpos=cpos, ypos = rpos;
	COORD scrn;
	HANDLE hOuput = GetStdHandle(STD_OUTPUT_HANDLE);
	scrn.X = cpos;
	scrn.Y = rpos;
	SetConsoleCursorPosition(hOuput, scrn);
}

void sleep(int m)
{
        for(int j=0;j<m*21000;j++)
        {

        }
}

char chracter_input(){
    char c;
    cout<<"Enter the character that you want to print"<<endl;
    cin>>c;
    return c;
}

float radian(int x){
    float pi = 3.14;
    return (2.0 *pi * (float(x) / 360.0));
}

int calculation_x(int degree, int radius){
    float deg = radian(degree);
    float x = (radius * cos(deg));
    return ceil(x);
}

int calculation_y(int degree, int radius){
    float deg = radian(degree);
    float y = (radius * sin(deg));
    return ceil(y);
}

void circle(char c, int radius){
    int center = (75/2) - (radius*2) - 2;

    for(int i=1; i<360;i++){
    int x = calculation_x(i,radius);
    int y = calculation_y(i,radius);
    gotoRowCol(x + radius,y + radius+center);
    cout<<c;
    sleep(100);
    }

}

int main()
{
    char c = chracter_input();
    circle(c, 7);
    return 0;
}