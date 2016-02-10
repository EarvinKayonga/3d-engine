#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Person/person.h"
#include "Vector/vector.h"


using namespace std;

int     main()
{
  Person Earvin("Earvin", "Kayonga", 23);
  Person Chris("Christelle", "Fremy", 22);
  Vector zero(0, 0, 0, 0);

  zero.printf(); 
  Earvin.say("hi");
  Earvin.hasFriends(Chris);
  Earvin.showFriends();
  return (0);
}
