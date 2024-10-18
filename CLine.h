//Filename: cLine.cpp
//Description: Abstract class to encapsulate Line properties
//Author: Adin Hultin
//Date Modified: September 4, 2024

#include "CShape.h"

#pragma once
#if !defined(_CLINE_H_)
#define _CLINE_H_

class CLine : public CShape

{
public:
    CLine(void); //default constructor
    ~CLine(void); //default constructor

    inline real x1() {return m_point1.x();}
    inline real y1() {return m_point1.y();}
    inline real x2() {return m_point2.x();}
    inline real y2() {return m_point2.y();}
    void set(real x1 = 0.0, real y1 = 0.0, real x2 = 0.0, real y2 = 0.0);

    
    inline void x1(real val) {m_point1.x(val);}
    inline void y1(real val) {m_point1.y(val);}
    inline void x2(real val) {m_point1.x(val);}
    inline void y2(real val) {m_point1.y(val);}

public:
    real calcLength();
    real calcArea();
    bool draw();
public:
    CPoint m_point1;
    CPoint m_point2;
    
};

#endif