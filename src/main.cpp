#include	<iostream>
#include	<string>
#include	<stdio.h>
#include	<stdlib.h>
#include	<time.h>
#include	"Person/person.h"
#include	"Vector/vector.h"


using namespace std;

int		main()
{
  Person	Earvin("Earvin", "Kayonga", 23);
  Person	Chris("Christelle", "Fremy", 22);

  Vector	zero(0, 0, 0, 0);
  Vector	unite(1, 1, 1, 0);

  Earvin.say("hi");
  Earvin.hasFriends(Chris);
  Earvin.showFriends();

  cout << "Zero: " << zero.toString() << endl << endl;
  cout << "Unite:" << unite.toString() << endl << endl;
  cout << "Sum:  " << (zero + unite).toString() << endl << endl;
  cout << "Mutiple Sum: " << (zero + unite + unite).toString() << endl << endl;
  cout << "Mutiplication: " << ((zero + unite + unite)*2.0).toString() << endl << endl;
  
  
  return (0);
}
