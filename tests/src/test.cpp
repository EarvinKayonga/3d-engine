#include	<cassert>
#include	<iostream>
#include	"../../src/Vector/vector.h"
#include	"../../src/Person/person.h"

using namespace std;

const string	red("\033[0;31m");
const string	green("\033[1;32m");
const string	yellow("\033[1;33m");
const string	cyan("\033[0;36m");
const string	magenta("\033[0;35m");
const string	reset("\033[0m");


int		main(){
  Person Chris("Christelle", "Fremy", 23);

  cout << "Testing an Instance of Person at initialization";
  assert (Chris.getFirstname() == "Christelle");
  assert (Chris.getName() == "Fremy");
  assert (Chris.getAge() == 23);
  cout << ": " << green << "success" << reset << endl;

  Chris.setName("Fre");
  Chris.setAge(2);
  Chris.setFirstname("Chris");
  
  cout << "Testing an Instance of Person at modification via setters";
  assert (Chris.getFirstname() == "Chris");
  assert (Chris.getName() == "Fre");
  assert (Chris.getAge() == 2);
  cout << ": " << green << "success" << reset << endl;

  cout << "Testing Class Person";
  cout << ": " << green << "success" << reset << endl;

  return (0);
}
