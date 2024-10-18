//Filename: cSquare.cpp
//Description: Abstract class to encapsulate Square properties
//Author: Adin Hultin
//Date Modified: September 4, 2024

#include "CRectangle.h"

#pragma once
#if !defined(_CSQUARE_H_)
#define _CSQUARE_H_

class CSquare : public CRectangle

{
public:
    CSquare(void); //default constructor
    ~CSquare(void); //default constructor
public:
    real calcArea();
    bool draw();
public:
    
};

#endif