#pragma once
#include "vector.h"

struct Ray{

    public:
    Vec o; // origin
    Vec d; // direction
    Ray();
    Ray(Vec,Vec);

};