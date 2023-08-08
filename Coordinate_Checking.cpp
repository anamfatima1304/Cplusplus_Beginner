#include <iostream>
#include <cmath>
using namespace std;

float distance(int x1, int x2, int y1, int y2)
{
    return sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
}

int isSquare(int x1, int x2, int x3, int x4, int y1, int y2, int y3, int y4)
{
    int dist1 = distance(x1, x2, y1, y2);
    int dist2 = distance(x3, x2, y3, y2);
    int dist3 = distance(x3, x4, y3, y4);
    int dist4 = distance(x1, x4, y1, y4);
    int dist5 = distance(x1, x3, y1, y3);
    int dist6 = distance(x2, x4, y2, y4);

    if (dist1 == dist2 && dist1 == dist3 && dist1 == dist4 && dist1 == dist5 && dist1 == dist6)
    {
        return 1;
    }
    return 0;
}

int isRectangle(int x1, int x2, int x3, int x4, int y1, int y2, int y3, int y4)
{
    int dist1 = distance(x1, x2, y1, y2);
    int dist2 = distance(x3, x2, y3, y2);
    int dist3 = distance(x3, x4, y3, y4);
    int dist4 = distance(x1, x4, y1, y4);
    int dist5 = distance(x1, x3, y1, y3);
    int dist6 = distance(x2, x4, y2, y4);

    if (dist1 == dist3 && dist2 == dist4 && dist1 != dist2 && dist3 != dist4 && dist5 == dist6)
    {
        return 1;
    }
    return 0;
}

int isParallelogram(int x1, int x2, int x3, int x4, int y1, int y2, int y3, int y4)
{
    int dist1 = distance(x1, x2, y1, y2);
    int dist2 = distance(x3, x2, y3, y2);
    int dist3 = distance(x3, x4, y3, y4);
    int dist4 = distance(x1, x4, y1, y4);
    int dist5 = distance(x1, x3, y1, y3);
    int dist6 = distance(x2, x4, y2, y4);

    if (dist1 == dist3 && dist2 == dist4 && dist5 != dist6)
    {
        return 1;
    }
    return 0;
}

int isRhombus(int x1, int x2, int x3, int x4, int y1, int y2, int y3, int y4)
{
    int dist1 = distance(x1, x2, y1, y2);
    int dist2 = distance(x3, x2, y3, y2);
    int dist3 = distance(x3, x4, y3, y4);
    int dist4 = distance(x1, x4, y1, y4);
    int dist5 = distance(x1, x3, y1, y3);
    int dist6 = distance(x2, x4, y2, y4);

    if ((dist1 == dist2 && dist1 == dist3 && dist1 == dist4 && dist5 != dist6))
    {
        return 1;
    }
    return 0;
}

int main()
{
    int x1, y1, x2, y2, x3, y3, x4, y4;
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

    if (isSquare(x1, x2, x3, x4, y1, y2, y3, y4) == 1)
    {
        cout << "This is a square." << endl;
    }
    else if (isRectangle(x1, x2, x3, x4, y1, y2, y3, y4) == 1)
    {
        cout << "This is a Rectangle." << endl;
    }
    else if (isParallelogram(x1, x2, x3, x4, y1, y2, y3, y4) == 1)
    {
        cout << "This is a Parallelogram." << endl;
    }
    else if (isRhombus(x1, x2, x3, x4, y1, y2, y3, y4) == 1)
    {
        cout << "This is a Rhombus." << endl;
    }
    else
    {
        cout << "The shape is not a Square, Rectangle, Parallelogram or Rhombus." << endl;
    }

    return 0;
}