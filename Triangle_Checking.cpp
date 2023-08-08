// Write a function which takes as parameter 3 points and tell whether these points are the coordinates of
// isosceles or equilateral or right angled or scalene triangle. NOTE “Make separate functions as
// (isEquilateral, isRightAngled and so on…).
// Sample Input: P1 0 0
//  P2 1 0
//  P3 1 1
// Sample Output: Right Angle Triangle.

#include<iostream>
#include<cmath>
using namespace std;

float distance(int x1, int x2, int y1, int y2)
{
    return sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
}

int isEquilateral(int x1, int x2, int x3, int y1, int y2, int y3)
{
    float dist1 = distance(x1, x2, y1, y2);
    float dist2 = distance(x3, x2, y3, y2);
    float dist3 = distance(x3, x1, y3, y1);

    if (dist1 == dist2 && dist1 == dist3)
    {
        return 1;
    }
    return 0;
}

int isIsosceles(int x1, int x2, int x3, int y1, int y2, int y3)
{
    float dist1 = distance(x1, x2, y1, y2);
    float dist2 = distance(x3, x2, y3, y2);
    float dist3 = distance(x3, x1, y3, y1);

    if ( dist1==dist2 && dist1!=dist3)
        return 1;
    if ( dist3==dist2 && dist1!=dist2)
        return 1;
    if ( dist1==dist3 && dist2!=dist3)
        return 1;
    return 0; 

}

int isScalene(int x1, int x2, int x3, int y1, int y2, int y3)
{
    float dist1 = distance(x1, x2, y1, y2);
    float dist2 = distance(x3, x2, y3, y2);
    float dist3 = distance(x3, x1, y3, y1);

    if (dist1 != dist2 && dist1 != dist3 && dist2 != dist3)
    {
        return 1;
    }
    return 0;
}

int isRightAngle(int x1, int x2, int x3, int y1, int y2, int y3)
{
    float dist1 = (((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
    float dist2 = (((x2 - x3) * (x2 - x3)) + ((y2 - y3) * (y2 - y3)));
    float dist3 = (((x3 - x1) * (x3 - x1)) + ((y3 - y1) * (y3 - y1)));

    if (dist1+dist2==dist3)
    {
        return 1;
    }
    if (dist2+dist3==dist1)
    {
        return 1;
    }
    if (dist1+dist3==dist2)
    {
        return 1;
    }
    return 0;
}

int main()
{
    int x1, y1, x2, y2, x3, y3;
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

    if (isEquilateral(x1, x2, x3, y1, y2, y3) == 1)
    {
        cout << "This is an Equilateral Triangle." << endl;
    }
    else if (isRightAngle(x1, x2, x3, y1, y2, y3) == 1)
    {
        cout << "This is a RightAngle Triangle." << endl;
    }
    else if (isScalene(x1, x2, x3, y1, y2, y3) == 1)
    {
        cout << "This is a Scalene Triangle." << endl;
    }
    else if (isIsosceles(x1, x2, x3, y1, y2, y3) == 1)
    {
        cout << "This is an Isosceles Triangle." << endl;
    }
    else
    {
        cout << "The triangle is not a Scalene, RightAngle, Isosceles or Equilateral." << endl;
    }
    return 0;
}