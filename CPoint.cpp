//Filename: CPoints.cpp
//Description: See header file
//Author: Adin Hultin
//Date Modified: September 4, 2024

#include <iostream>
using namespace std;
#include "CPoint.h"
CPoint::CPoint(real nX, real nY)
{
    set(nX, nY);
    #ifdef _DEBUG
    cout << "Point class created (" << x() << ", " << y() << ")" << endl;
    #endif
}

CPoint::~CPoint(void)
{
    #ifdef _DEBUG
    cout << "Point class destroyed" << endl;
    #endif
}


real CPoint::calculateDistance(CPoint p)
{
    #ifdef _DEBUG
    cout << "class calcDistance" << endl;
    #endif
    real pow1, pow2;
    pow1 = pow(this->x() - p.x(), 2.0);
    pow2 = pow(this->y() - p.y(), 2.0);
    return sqrt(pow1 + pow2);
   
}
real calculateDistance(CPoint p1, CPoint p2)
{
    #ifdef _DEBUG
    cout << : "Global calcDistance" << endl;
    #endif
    return p1.calculateDistance(p2);
}