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

int           setVectorAt(int i, Vector vect){
  if (i > 3 || i < 0){
    return (1);
  }
  
  this->vectors[i] = vect;
  return (0);
}

Vector[4]	getTab(){
  return (this->vectors);
}

int		setTab(Vector[4] tab){
  //TODO
  return 1;
}

int		addToTab(Vector toto){
  //TODO
  return 1;
}

