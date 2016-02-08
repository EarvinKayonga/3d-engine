#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Person/person.h"

using namespace std;

int     main()
{
  Person Earvin("Earvin", "Kayonga", 23);
  Person Chris("Christelle", "Fremy", 22);
  Earvin.say("hi");
  Earvin.hasFriends(Chris);
  Earvin.showFriends();
  return (0);
}
