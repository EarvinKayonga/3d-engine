#include <string>
#include <vector>
#include <iostream>
#include <cstdio>
#include "person.h"
#include "../Patch/patch.h"

using namespace std;
using namespace patch;

void Person::hasFriends(Person mfriend){
  friends.push_back(mfriend);
};

vector<Person> Person::Friends(){
  return friends;
};

void Person::say(string say){
  std::cout << "Person " << prenom << " is saying " << say << std::endl;
};

string Person::toString(){
  std::ostringstream stm;
  stm << age;
  return "Prénom: " + prenom + " Nom: " + nom + " Age: " + stm.str();
}

void Person::showFriends(){
  std::cout << prenom << "'s friends : " << std::endl;
  for (unsigned int i = 0; i < friends.size(); i++){
    std::cout << friends[i].toString() << std::endl;
  }
  std::cout << std::endl;
};
