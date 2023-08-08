// Write a function which takes 4 coordinates of the Rectangle and a point P as parameter. Your function
// should be able to tell whether P lies inside the Rectangle, On the Rectangle or Outside rectangle.
// Sample Input: P1 0 0
//  P2 2 0
//  P3 2 2
//  P4 0 2
//  P 1 1
// Output: P lies inside Square

#include <iostream>
#include <cmath>
using namespace std;

int isOutsideRectangle(int x1, int x2, int x3, int x4, int y1, int y2, int y3, int y4, int px, int py){

    if((px>x1 && px>x2 && px>x3 && px>x4) || (py>y1 && py>y2 && py>y3 && py>y4)){
        return 1;
    }

    if((px<x1 && px<x2 && px<x3 && px<x4) || (py<y1 && py<y2 && py<y3 && py<y4)){
        return 1;
    }

    return 0;
}

int isOnRectangle(int x1, int x2, int x3, int x4, int y1, int y2, int y3, int y4, int px, int py){

    if(isOutsideRectangle(x1, y1, x2, y2, x3, y3, x4, y4, px, py)==1){
        return 0;
    }

    if((px==x1 || px==x2 || px==x3 || px==x4) || (py==y1 || py==y2 || py==y3 || py==y4)){
        return 1;
    }
    return 0;
}

int isInsideRectangle(int x1, int x2, int x3, int x4, int y1, int y2, int y3, int y4, int px, int py){

    if((px>x1 && px>x2 && px>x3 && px>x4) || (py>y1 && py>y2 && py>y3 && py>y4)){
        return 0;
    }

    if((px<x1 && px<x2 && px<x3 && px<x4) || (py<y1 && py<y2 && py<y3 && py<y4)){
        return 0;
    }

    return 1;
}

int main()
{
    int x1, y1, x2, y2, x3, y3, x4, y4, px, py;
    cout << "Enter x-co-ordinate of first point" << endl;
    cin >> x1;
    cout << "Enter y-co-ordinate of first point" << endl;
    cin >> y1;
    cout << "Enter x-co-ordinate of second point" << endl;
    cin >> x2;
    cout << "Enter y-co-ordinate of second point" << endl;
    cin >> y2;
    cout << "Enter x-co-ordinate of third point" << endl;
    cin >> x3;
    cout << "Enter y-co-ordinate of third point" << endl;
    cin >> y3;
    cout << "Enter x-co-ordinate of fourth point" << endl;
    cin >> x4;
    cout << "Enter y-co-ordinate of fourth point" << endl;
    cin >> y4;
    cout << "Enter x-co-ordinate of the point to be located" << endl;
    cin >> px;
    cout << "Enter y-co-ordinate of the point to be located" << endl;
    cin >> py;

    if(isOutsideRectangle(x1, y1, x2, y2, x3, y3, x4, y4, px, py)==1){
        cout<<"Point is outside the Rectangle."<<endl;
    }
    else if(isOnRectangle(x1, y1, x2, y2, x3, y3, x4, y4, px, py)==1){
        cout<<"Point is on the Rectangle."<<endl;
    }
    else if(isInsideRectangle(x1, y1, x2, y2, x3, y3, x4, y4, px, py)==1){
        cout<<"Point is inside the Rectangle."<<endl;
    }

    return 0;
}