//
// Created by kai on 2/4/16.
//Khuong Nguyen  101384005
//CSCI 2312 -002 Sping 2016
//Instructor: Ivo Georgiev
//HW: PA1  Due Date: 02/07/2016

#include <cmath>
#include "Point.h"

// area argument

double computeArea (const Point &a, const Point &b, const Point &c){
    double AB = a.distanceTo(b);
    double BC = b.distanceTo(c);
    double CA = c.distanceTo(a);

    // semiperimeter of the triangle defines by 3 points
    double s = (AB + BC + CA )/2;

    // area of the triangle defines by 3 points
    double area = sqrt(s*(s - AB)*(s - BC)*(s - CA));

    return 0;
};

