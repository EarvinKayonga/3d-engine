#include	<iostream>
#include	<string>
#include	<stdio.h>
#include	<stdlib.h>
#include	<time.h>
#include	"Person/person.hpp"
#include	"Vector/vector.hpp"


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

  Vector x(1, 0, 0, 1);
  Vector y(0, 1, 0, 1);
  Vector z(0, 0, 1, 1);
  Vector t = x*2;
  
  cout << "Length: "<< endl;
  cout << "X: "<< x.toString() << " "<< x.length()<< endl;
  cout << "Y: "<< y.toString() << " "<< y.length()<< endl;
  cout << "Z: "<< z.toString() << " "<< z.length()<< endl;
  cout << "T = X*2: "<< t.toString() << " "<< t.length()<< endl;
  
  cout << "Dot Product: "<<endl;
  cout << "x.x: "<< x*x << endl;
  cout << "y.x: "<< y*x << endl;
  cout << "z.x: "<< z*x << endl;
  cout << "y.z: "<< y*z << endl;
  cout << "t.x: "<< t*x << endl;
  
  return (0);
}
