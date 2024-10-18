//Filename: CSquares.cpp
//Description: See header file
//Author: Adin Hultin
//Date Modified: September 4, 2024

#include <iostream>
using namespace std;
#include "CSquare.h"
CSquare::CSquare(void)
{
    m_numSides = 4;
    m_width = 4.2;
    m_height = m_width;
    #ifdef _DEBUG
    cout << "Square class created ( " << m_width << ", " << m_height <<  ")" <<  endl;
     #endif
}

CSquare::~CSquare(void)
{
    #ifdef _DEBUG
    cout << "Square class destroyed" << endl;
     #endif
}
real CSquare::calcArea()
{
    return 0.0;
}
bool CSquare::draw()
{
    CShape::draw();
    cout << "Drawing Square" << endl;
    return true;
}