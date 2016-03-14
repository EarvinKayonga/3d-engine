#ifndef MATRIX_H
#define MATRIX_H

#include ../Vector/vector.h

class Matrix{
 private:
  Vector[4] tab;

 public:
  Vector[4]       getTab();
  int            setTab(Vector[4] tab);
  int            addToTab(Vector toto);

  /*
   * Initializers
   */
  Matrix(Vector[4] mtab){
    tab = mtab;
  }
  

  Matrix();
  
}

#endif MATRIX_H
