//Filename: CRectangles.cpp
//Description: See header file
//Author: Adin Hultin
//Date Modified: September 4, 2024

#include <iostream>
using namespace std;
#include "CRectangle.h"
CRectangle::CRectangle(void)
{
    m_numSides = 4;
    m_width = 2.3;
    m_height = 5.1;
    #ifdef _DEBUG
    cout << "Rectangle class created ( " << m_width << ", " << m_height <<  ")" <<  endl;
     #endif
}

CRectangle::~CRectangle(void)
{
    #ifdef _DEBUG
    cout << "Rectangle class destroyed" << endl;
     #endif
}
real CRectangle::calcArea()
{
    return 0.0;
}
bool CRectangle::draw()
{
    cout << "Drawing Rectangle" << endl;
    return true;
}