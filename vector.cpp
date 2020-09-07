#include <cmath>
#include <iostream>
#include "vector.h"
using namespace std;

Vector::Vector(int x, int y) 
                {
                _x=x;
                _y=y;
                }
int Vector::getX()
    {
    return _x;
    }                
int Vector::getY()
    {
    return _y;
    }
void Vector::getCoords()
    {
    std::cout<< "("<< _x << "," << _y << ")" << endl; 
    }
void Vector::getSqare()
    {
    if (_x==0 && _y==0) { cout<< "0";}
    if (_x>0 && _y>0) { cout<<"Первая четверть";}
    if (_x>0 && _y<0) { cout<<"Четвёртая четверть";}
    if (_x<0 && _y>0) { cout<<"Вторая четверть";}
    if (_x<0 && _y<0) { cout<<"Третья четверть";}
    }
double Vector::getAngle()
    {
    return atan( _y/_x);
    }
