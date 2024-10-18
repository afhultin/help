//Filename: cCircle.cpp
//Description: Abstract class to encapsulate Circle properties
//Author: Adin Hultin
//Date Modified: September 4, 2024

#include "CEllipse.h"

#pragma once
#if !defined(_CCIRCLE_H_)
#define _CCIRCLE_H_

class CCircle : public CEllipse

{
public:
    CCircle(real rad = 1.0); //default constructor
    ~CCircle(void); //default constructor

    //accessor
    inline real radius() {return m_minorRadius;}
    inline real r() {return m_minorRadius;}

    void set(real rad, real x, real y , int r= 0, int g = 0, int b = 0);
    void radius(real rad, real rad2=-1.0);
public:
    real calcArea();
    bool draw();
public:
    
};

#endif