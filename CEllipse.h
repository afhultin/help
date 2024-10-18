//Filename: cEllipse.cpp
//Description: Abstract class to encapsulate Ellipse properties
//Author: Adin Hultin
//Date Modified: September 4, 2024

#include "CShape.h"

#pragma once
#if !defined(_CELLIPSE_H_)
#define _CELLIPSE_H_

class CEllipse : public CShape

{
public:
    CEllipse(void); //default constructor
    ~CEllipse(void); //default constructor

    inline real minor() {return m_minorRadius;}
    inline real major() {return m_majorRadius;}
    inline real m() {return m_minorRadius;}
    inline real M() {return m_majorRadius;}
    void set(real radMinor, real radMajor, real x, real y , int r= 0, int g = 0, int b = 0);
    void radius(real radMinor, real radMajor);
public:
    real calcArea();
    bool draw();
public:
    real m_majorRadius;
    real m_minorRadius;
    
};

#endif