#include	<cstdio>
#include	<stdlib.h>
#include	<iostream>
#include	<string>
#include	<sstream>
#include	<stdexcept>
#include	"vector.h"
#include	"../Patch/patch.h"

using namespace std;
using namespace patch;

void	Vector::printf(){
  std::printf("%s\n", "class Vector {");
  std::printf("    x: %f  y: %f z: %f d: %f \n", coords[0], coords[1], coords[2], coords[3]);
  std::printf("%s\n", "}");
};

string	Vector::toString(){
  string	Vect = "<Class:Vector (";
  int i = 0;

  for ( i = 0; i < 4; i++){
    std::ostringstream stm;
    stm << coords[i] ;
    Vect +=  stm.str() + " ";
  }

  Vect += ")>";
  return (Vect);
}

double Vector::get(const int i) const{
  if (i > -1 && i < 4)
    return (coords[i]);
  else
    return (double) NULL;
}

int   Vector::set(const int index, const double value)
{
  if (index > 3 || index < 0)
    return 0;
  else{
    coords[index] = value;
    return 1;
  }
}

double Vector::x(){
  return (coords[0]);
}

double	Vector::y(){
  return (coords[1]);
}

double	Vector::z(){
  return (coords[2]);
}

double Vector::d(){
  return (coords[3]);
}

void	Vector::set_x(double x){
  coords[0] = x;
}

void	Vector::set_y(double y){
  coords[1] = y;
}

void	Vector::set_z(double z){
  coords[2] = z;
}

void	Vector::set_d(double d){
  coords[3] = d;
}

Vector	Vector::operator+(const Vector& right){
  Vector	res;
  int           i;

  for (i = 0; i < 4; i++){
    double      value = get(i) + right.get(i);
    if (res.set(i, value) != 1) // Something went bad
      return (Vector)(NULL);
  }
  return        (res);
}

Vector  Vector::operator*(const double& right){
  Vector        res;
  int           i;

  for (i = 0; i < 4; i++){
    double      value = get(i)*right;
    if (res.set(i, value) != 1)
      return   (Vector)(NULL);
  }
  
  return        (res);
}
