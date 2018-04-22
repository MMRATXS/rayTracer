#include "vector.h"
#include "ray.h"
#include "sphere.h"
#include "sphere.cpp"
#include "vector.cpp"
#include "ray.cpp"
#include "color.h"
#include <fstream>
#include <iostream>

using namespace std;

// double dot(Vec v, Vec b){
//     return (v.x+b.x+v.y*b.y+v.z*b.z);
// }

int main(int argc, char** argv) {

    const int width=500;                        //s
    const int height=500;

    std::ofstream out("out.ppm");               //output the .ppm file for display
    out<<width<<"\n"<<height<<"\n";

    Sphere sp(Vec(width/2,height/2,50),20);     // sphere object
    Color white(255,255,255);                   //coloring color: white
    static Color pixelColor[height][width];     //color for each pixel

    // Iterating the grid 
    for (int x=0; x<width; x++){
        for (int y=0; y<height; y++){

            Ray ray(Vec(y,x,0),Vec(0,0,1));     // Generate a ray

            double t =20000;

            // Check for intersections
            if(sp.intersect(ray,t)){
                pixelColor[x][y] = white;   // Coloring
            }

            out<<pixelColor[x][y].r << std::endl;
            out<<pixelColor[x][y].g << std::endl;
            out<<pixelColor[x][y].b << std::endl;
        }   
    }
    
    return 0;
}