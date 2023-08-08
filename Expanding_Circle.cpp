// Write a program which will first print the circle with a certain radius R in the middle of the
// screen using the circle’s equation x
// 2 + y
// 2 = R2 and then compute the x and y using their
// parametric equation with respect to Theta. x = rCos and y = rSin.
//  Enhance the first part and Print the circle and then erase it and then Change the Radius to
// such that it seems that the circle has been expanded, and then more and more until it reaches
// to the full-screen. After that it should start shrinking and this process keeps on repeating. 

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

void circle(char c, int radius, int space){
    int center = (50)/2;

    for(int i=1; i<360;i++){
    int x = calculation_x(i,radius);
    int y = calculation_y(i,radius);
    gotoRowCol(x + radius + space,y + radius+center+ space);
    cout<<c;
    }
}

void expand(char c, int radius){
    int space = radius;
    for(int i=1; i<=radius; i++){
        circle(c, i, space);
        sleep(1000);
        circle(' ', i, space);
        space--;
    }
}

void shrink(char c, int radius){
    int space = 0;
    for(int i=radius; i>=1; i--){
        circle(c, i, space);
        sleep(1000);
        circle(' ', i, space);
        space++;
    }
    
}
int main()
{
    int row = 14, col = 10;
    char c = chracter_input();
    int radius = row/2;
    while(1){
        expand(c, radius);
        shrink(c, radius);
    }
    
    return 0;
}