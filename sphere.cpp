#include "sphere.h"

Sphere::Sphere(){
}

Sphere::Sphere(Vec i, double j){
    c=i;
    r=j;
}
double Sphere::dot(Vec v, Vec b){
        return (v.x+b.x+v.y*b.y+v.z*b.z);
    }
bool Sphere::intersect(Ray ray, double &t){
    Vec o = ray.o;
    Vec d = ray.d;
    Vec oc = o-c;
    double b= 2*dot(oc,d);
    double c= dot(oc,oc)-(r*r);
    double disc = b*b -4*c;

    if(disc<0){
        return false;
    }
    else{
        disc =sqrt(disc);
        double t0 = -b-disc;
        double t1 = -b+disc;

        t= (t0<t1) ? t0:t1;
        return true;
    }
}