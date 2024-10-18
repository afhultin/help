//Filename: CTriangles.cpp
//Description: See header file
//Author: Adin Hultin
//Date Modified: September 4, 2024

#include <iostream>
using namespace std;
#include "CTriangle.h"
CTriangle::CTriangle(void)
{
    m_numSides = 3;
    #ifdef _DEBUG
    cout << "Triangle class created ( " << m_numSides <<  ")" <<  endl;
     #endif
}

CTriangle::~CTriangle(void)
{
    #ifdef _DEBUG
    cout << "Triangle class destroyed" << endl;
     #endif
}
real CTriangle::calcArea()
{
    return 0.0;
}
bool CTriangle::draw()
{
    cout << "Drawing Triangle" << endl;
    return true;
}