#include "vector.h"

Vec::Vec(){
    x=y=z=0;
}

Vec::Vec(double a, double b, double c){
    x=a;
    y=b;
    z=c;
}

Vec Vec::operator-(Vec v){
    return Vec(x-v.x,y-v.y,z-v.z);
}