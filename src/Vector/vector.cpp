#include	<cstdio>
#include	<stdlib.h>
#include	<iostream>
#include	<string>
#include	<sstream>
#include	<stdexcept>
#include        <math.h>
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

double  Vector::length(){ // u*u = ||u||^2
  double        res;
  int           line;

  res = 0;
  for (line = 0; line < 3; line++){
    res += coords[line] * coords[line];
  }
  return        (sqrt(res));
}

Vector	Vector::operator+(const Vector& right){
  Vector	res;
  int           i;

  for (i = 0; i < 3; i++){
    double      value = get(i) + right.get(i);
    if (res.set(i, value) != 1) // Something went bad
      return   (NULL);
  }
  if (!res.set(3, this->coords[3]))
    return (NULL);
  
  return        (res);
}

Vector  Vector::operator*(const double& right){
  Vector        res;
  int           i;

  for (i = 0; i < 3; i++){
    double      value = get(i)*right;
    if (!res.set(i, value))
      return   (NULL);
  }
  
  if (!res.set(3, this->coords[3]))
    return (NULL);
  
  return        (res);
}

Vector  Vector::operator-(const Vector& right){
  Vector        res;
  int           i;

  for (i = 0; i < 3; i++){
    double      value = get(i) - right.get(i);
    if (res.set(i, value) != 1) // Something went bad
      return   (NULL);
  }

  if (!res.set(3, this->coords[3]))
    return (NULL);
  
  return        (res);
}

double  Vector::operator*(const Vector& right){
  double        res;
  int           line;

  res = 0;
  for (line = 0; line < 3; line++){
    res += right.coords[line] * coords[line];
  }
  
  return        (res);
}

void     Vector::operator=(const Vector& right){
  for (int nb = 0;  nb < 4; nb++){
    coords[nb] = right.get(nb);
  }
}

bool    Vector::operator==(const Vector& right){
  int           line;
  bool          res;

  res = true;
  for (line = 0; line < 3; line++){
    if (get(line)  != right.get(line))
      return   (false);
  }
  
  return        (res);
}

bool    Vector::operator!=(const Vector& right){
  int           line;
  bool          res;

  res = false;
  for (line = 0; line < 3; line++){
    if (get(line)  != right.get(line))
      return   (true);
  }

  return        (res);
}

Vector& Vector::operator+=(const Vector& right){
  this->coords[0] += right.coords[0];
  this->coords[1] += right.coords[1];
  this->coords[2] += right.coords[2];
  
  return (*this);
}

Vector& Vector::operator*=(const double& right){
  this->coords[0] *= right;
  this->coords[1] *= right;
  this->coords[2] *= right;
  
  return (*this);
}

Vector& Vector::operator-=(const Vector& right){
  this->coords[0] -= right.coords[0];
  this->coords[1] -= right.coords[1];
  this->coords[2] -= right.coords[2];
    
  return (*this);
}
