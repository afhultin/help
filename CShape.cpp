//Filename: CShapes.cpp
//Description: See header file
//Author: Adin Hultin
//Date Modified: September 4, 2024

#include <iostream>
using namespace std;
#include "CShape.h"
CShape::CShape(void)
{
   
    #ifdef _DEBUG
    cout << "Shape class created" << endl;
     #endif
}

CShape::~CShape(void)
{
    #ifdef _DEBUG
    cout << "Shape class destroyed" << endl;
     #endif
}
