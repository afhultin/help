//Filename: CLines.cpp
//Description: See header file
//Author: Adin Hultin
//Date Modified: September 4, 2024

#include <iostream>
using namespace std;
#include "CLine.h"
CLine::CLine(void)
{
    m_point2.set();
    m_point2.set(2.0, 4.2);

    #ifdef _DEBUG
    cout << "Line created (" << m_point1.x() << ", " << m_point1.y() 
    << ") (" << m_point2.x() << ", " << m_point2.y() << ")" << endl;
     #endif
}

CLine::~CLine(void)
{
    #ifdef _DEBUG
    cout << "Line destroyed" << endl;
     #endif
}
void CLine::set(real x1, real y1, real x2, real y2)
{
        m_point1.set(x1, y1);
        m_point2.set(x2, y2);
}
real CLine::calcLength()
{
    
    return calculateDistance(m_point1, m_point2);

}
real CLine::calcArea()
{
    return this -> calcLength();
}
bool CLine::draw()
{
    
    cout << "Drawing Line" << endl;
    return true;
}