#include	"../Vector/vector.h"
#include	"Matrix.h"

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
  //TODO
  return 1;
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

