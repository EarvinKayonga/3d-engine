#ifndef		MATRIX_H
#define		MATRIX_H

#include	../Vector/vector.h

class		Matrix{
 private:
		Vector[4] Vectors;
		//functions that needs to be implemented
 public:
  Vector	get(int i);
  Vector[4]     getVectors();
  int		setVectorAt(int, Vector);
  int           setVectors(Vector[4] tab);
  int           addToVectors(Vector toto);

  /*
   * Initializers
   */
  Matrix(Vector[4] mtab){
    Vectors = mtab;
  }

  Matrix();
}

#endif		MATRIX_H
