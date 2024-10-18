//Filename: cShape.cpp
//Description: Abstract class to encapsulate shape properties
//Author: Adin Hultin
//Date Modified: September 4, 2024

#include "CPoint.h"
#include "CColor.h"

#pragma once
#if !defined(_CSHAPE_H_)
#define _CSHAPE_H_
class CShape
{
public:
    CShape(void); //default constructor
    ~CShape(void); //default constructor
public:

    virtual real calcArea() = 0;
    virtual bool draw() = 0;

    inline void setColor(int r, int g, int b) {m_color.set(r,g,b);}
    inline void setCenter(int x, int y) {m_center.set(x,y);}
protected:
    CPoint m_center;
    CColor m_color;
    real m_rotation;
};

#endif