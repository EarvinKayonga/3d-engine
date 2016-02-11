#include <cstdio>
#include <iostream>
#include <string>
#include <sstream>
#include <stdexcept>
#include "vector.h"
#include "../Patch/patch.h"

using namespace std;
using namespace patch;

void Vector::printf(){
  std::printf("%s\n", "class Vector {");
  std::printf("    x: %f  y: %f z: %f d: %f \n", coords[0], coords[1], coords[2], coords[3]);
  std::printf("%s\n", "}");
};

string Vector::toString(){
  string Vect = "<Class:Vector ";
  
  for (int i = 0; i < 4; i++){
    std::ostringstream stm ;
    stm << coords[i] ;
    Vect += to_string(i)  + stm.str() + " ";
  }
  
  Vect += ">";
  return (Vect);
}

double Vector::x(){
  return (coords[0]);
}

double Vector::y(){
  return (coords[1]);
}

double Vector::z(){
  return (coords[2]);
}

double Vector::d(){
  return (coords[3]);
}

void Vector::set_x(double x){
  coords[0] = x;
}

void Vector::set_y(double y){
  coords[1] = y;
}

void Vector::set_z(double z){
  coords[2] = z;
}

void Vector::set_d(double d){
  coords[3] = d;
}

Vector Vector::operator+(const Vector& right){
  Vector res;
  
  
  return (res);
}
