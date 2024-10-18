//Filename: CPolygons.cpp
//Description: See header file
//Author: Adin Hultin
//Date Modified: September 4, 2024

#include <iostream>
using namespace std;
#include "CPolygon.h"
CPolygon::CPolygon(void)
{
    m_numSides = 0;
    #ifdef _DEBUG
    cout << "Polygon class created (number of sides: " << m_numSides << ")" <<  endl;
     #endif
}

CPolygon::~CPolygon(void)
{
    #ifdef _DEBUG
    cout << "Polygon class destroyed" << endl;
     #endif
}
