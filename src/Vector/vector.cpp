#include "vector.h"

void Vector::printf(){
  std::printf("%s\n", "class Vector {");
  std::printf("    x: %f  y: %f z: %f d: %f \n", coords[0], coords[1], coords[2], coords[3]);
  std::printf("%s\n", "}");
};

string Vector::toString(){
  return "sz";
}
