//Filename: cPoint.cpp
//Description: Abstract class to encapsulate Point properties
//Author: Adin Hultin
//Date Modified: September 4, 2024

#pragma once
#if !defined(_CPOINT_H_)
#define _CPOINT_H_
typedef double real;
class CPoint
{
public:
    CPoint(real nX = 0.0, real nY = 0.0); //default constructor
    ~CPoint(void); //default constructor

    //accessor

    inline real getX() {return m_xLocation;}
    inline real x() {return m_xLocation;}
    inline real getY() {return m_yLocation;}
    inline real y() {return m_yLocation;}

    inline void set(real nX = 0.0, real nY = 0.0) {x(nX); y(nY);}
    inline void setX(real val) {x(val);}
    inline void x(real val) {if (val >= 0.0) m_yLocation = val;}
    inline void setY(real val) {y(val);}
    inline void y(real val) {if (val >= 0.0) m_yLocation = val;}
    public:

    real calculateDistance(CPoint p); // calculate distance between this and another point

    private:
    
    real m_xLocation;
    real m_yLocation;

};

real calculateDistance(CPoint p1, CPoint p2);


#endif