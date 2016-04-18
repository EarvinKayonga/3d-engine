#include	"../Vector/vector.h"
#include	"Matrix.hpp"

Vector	Matrix::get(int i){
  if(i > -1 && i < 4)
  {
    return (this->vectors[i]);
  }
  else
  {
    return (Vector) NULL;
  }
}

int   Matrix::setVectorAt(int i, Vector vect){
  if (i > 3 || i < 0){
    return (1);
  }

  this->vectors[i] = vect;
  return (0);
}

Vector[4]	getTab(){
  return (this->vectors);
}

int		Matrix::setTab(Vector[4] tab){
  int i = 0;

  while(i  < 4){
    this->vectors[i] = tab[i];
    i++;
  }
  return (0);
}

int	  Matrix::addToTab(Vector toto){
  //TODO
  return 1;
}
