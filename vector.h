#pragma once
#include <iostream>

using namespace std;

struct Vec{

    public:
    double x,y,z;
    Vec();
    Vec(double a,double b,double c);
    Vec operator -(Vec V);
};