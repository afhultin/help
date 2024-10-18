//Filename: cRectangle.cpp
//Description: Abstract class to encapsulate Rectangle properties
//Author: Adin Hultin
//Date Modified: September 4, 2024

#include "CPolygon.h"

#pragma once
#if !defined(_CRECTANGLE_H_)
#define _CRECTANGLE_H_

class CRectangle : public CPolygon

{
public:
    CRectangle(void); //default constructor
    ~CRectangle(void); //default constructor
public:
    real calcArea();
    bool draw();
public:
    real m_width;
    real m_height;
    
};

#endif