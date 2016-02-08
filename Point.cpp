//
// Created by kai on 2/4/16.
//Khuong Nguyen  101384005
//CSCI 2312 -002 Sping 2016
//Instrutor: Ivo Georgiev
//HW: PA1  Due Date: 02/07/2016

#include "Point.h"
#include <cmath>


using namespace std;

// default constructor
Point::Point() {
    x = 0;
    y = 0;
    z = 0;
}
 Point::Point(double x1, double y1, double z1) {
     x = x1;
     y = y1;
     z = z1;
 }

// mutator functions
void Point::setX(double newX) {
    newX =x;
}

void Point::setY(double newY) {
    newY = y;

}

void Point::setZ(double newZ) {
    newZ = z;
}

// accessor functions
double Point::getX() const {
    return x;
}
double Point::getY() const { return y; }
double Point::getZ() const { return z; }

double Point::distanceTo(const Point &d) const {
    // d = sqrt( (x1-x0)^2 + (y1-y0)^2 + (z1-z0)^2)
    return sqrt(pow(x - d.getX(),2) + pow(y - d.getY(),2) + pow(z - d.getZ(),2));
}