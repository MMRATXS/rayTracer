#pragma once
#include "vector.h"
#include "ray.h"
#include "math.h"

struct Sphere{

    public:
    Vec c; // center
    double r; // radius
    Sphere();
    Sphere(Vec, double);
    double dot(Vec v, Vec b);

    bool intersect(Ray ray, double &t);

};