#include <cassert>
#include "../../src/Vector/vector.h"
#include "../../src/Person/person.h"


using namespace std;

int main(){
  Person Chris("Christelle", "Fremy", 23);
  assert (Chris.getAge() == 23);
  return (0);
}
