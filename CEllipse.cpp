//Filename: CEllipses.cpp
//Description: See header file
//Author: Adin Hultin
//Date Modified: September 4, 2024

#include <iostream>
using namespace std;
#include "CEllipse.h"
CEllipse::CEllipse(void)
{
    m_majorRadius = 4.2;
    m_minorRadius = 2.0;
    #ifdef _DEBUG
    cout << "Ellipse created :( " << m_majorRadius << ", " << m_minorRadius << ")" <<  endl;
     #endif
}

CEllipse::~CEllipse(void)
{
    #ifdef _DEBUG
    cout << "Ellipse class destroyed" << endl;
     #endif
}
void CEllipse::set(real radMinor, real radMajor, real x, real y , int r, int g, int b)
{
    this->radius(radMinor, radMajor);
    m_color.set(r, g, b);
    m_center.set(x, y);

}
    
void CEllipse::radius(real radMinor, real radMajor)
{
    if (radMinor <= 0.0 || radMajor <= 0.0) return;
    m_minorRadius = min(radMinor, radMajor);
    m_minorRadius = max(radMinor, radMajor);
    #ifdef _DEBUG
    cout << "Ellipse radius set ( " << m_minorRadius << ", " << m_majorRadius << " )" << endl;
    #endif
}
    
real CEllipse::calcArea()
{
    return M_PI * m_minorRadius * m_majorRadius;
}
bool CEllipse::draw()
{
    #ifdef _DEBUG
    cout << "Drawing Ellipse" << endl;
    return true;
     #endif
}