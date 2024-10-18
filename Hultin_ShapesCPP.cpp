//Filename: ShapesCPP.cpp
//Description: Homework 1 object orientated programming
//Author: Adin Hultin
//Date Modified: September 4, 2024

#include <iostream>
using namespace std;

#include "CSquare.h"
#include "CCircle.h"
#include "CTriangle.h"

int main()
{
    cout << "Welcome to Shapes CPP!" << endl;

    CEllipse myShape;
    myShape.set(4.2, 3.2,4.5,5.5);
    myShape.setColor(25,55,87);

    /*CCircle myShape1;
    CSquare myShape2;
    CTriangle myShape3;
    CColor myColor;
    myColor.set(6, 7, 24);

    CPoint p1, p2;
    p2.set(4.2, 5.3);
    
    real dist;
    dist = calculateDistance(p1, p2);
    cout << "Distance: " << dist << endl;
    */
    //((CShape)(myShape3)).draw();

    //cout << "X value = " << myShape3.m_center.m_xLocation << endl;

    return 0;
}