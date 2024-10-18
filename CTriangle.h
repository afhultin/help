//Filename: cTriangle.cpp
//Description: Abstract class to encapsulate Triangle properties
//Author: Adin Hultin
//Date Modified: September 4, 2024

#include "CPolygon.h"
#include "CLine.h"

#pragma once
#if !defined(_CTRIANGLE_H_)
#define _CTRIANGLE_H_

class CTriangle : public CPolygon

{
public:
    CTriangle(void); //default constructor
    ~CTriangle(void); //default constructor
public:
    
    real calcArea();

    bool draw();
public:
    CLine m_line1;
    CLine m_line2;
    CLine m_line3;
    
};

#endif