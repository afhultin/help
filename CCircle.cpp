//Filename: CCircles.cpp
//Description: See header file
//Author: Adin Hultin
//Date Modified: September 4, 2024

#include <iostream>
using namespace std;
#include "CCircle.h"
CCircle::CCircle(real rad)
{
    this->radius(rad);
    #ifdef _DEBUG
    m_majorRadius = m_minorRadius;

    cout << "Circle created :( " << m_majorRadius << ", " << m_minorRadius << ")" <<  endl;
    #endif
}

CCircle::~CCircle(void)
{
    cout << "Circle class destroyed" << endl;
}

void CCircle::set(real rad, real x, real y , int r, int g, int b)
{
    this->radius(rad);
    m_color.set(r, g, b);
    m_center.set(x, y);
}

void CCircle::radius(real rad, real rad2)
{
    if (rad <= 0.0) return;
    m_minorRadius = rad;
    m_majorRadius = rad;

}
real CCircle::calcArea()
{
    return CEllipse::calcArea();
}
bool CCircle::draw()
{
    cout << "Drawing Circle" << endl;
    return true;
}