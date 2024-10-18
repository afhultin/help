//Filename: cPolygon.cpp
//Description: Abstract class to encapsulate Polygon properties
//Author: Adin Hultin
//Date Modified: September 4, 2024

#include "CShape.h"

#pragma once
#if !defined(_CPOLYGON_H_)
#define _CPOLYGON_H_

class CPolygon : public CShape

{
public:
    CPolygon(void); //default constructor
    ~CPolygon(void); //default constructor

protected:
    int m_numSides;
    
};

#endif