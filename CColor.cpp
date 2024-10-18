//Filename: CColors.cpp
//Description: See header file
//Author: Adin Hultin
//Date Modified: September 4, 2024

#include <iostream>
using namespace std;
#include "CColor.h"
CColor::CColor(int red, int green, int blue)
{
    this->r(red);
    this->g(green);
    this->b(blue);
    #ifdef _DEBUG
    cout << "Color class created (" << r() << ", " << g() << ", " << b() << endl;
    #endif
}
CColor::~CColor(void)
{
    #ifdef _DEBUG
    cout << "Color class destroyed" << endl;
    #endif
}