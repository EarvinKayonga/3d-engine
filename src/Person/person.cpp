#include <string>
#include "person.h"

using namespace std;

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
  return "Prénom: " + prenom + " Nom: " + nom + " Age: " + std::to_string(age);
}

void Person::showFriends(){
  cout << prenom << "'s friends : " << endl;
  for (unsigned int i = 0; i < friends.size(); i++){
    cout << friends[i].toString() << endl;
  }
  cout << endl;
};
