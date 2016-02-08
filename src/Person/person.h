#include <vector>
#include <string>
#include <iostream>

using namespace std;

class Person{
      private:
	int	age;
	string	nom, prenom;
	vector<Person> friends;

      public:
	Person(string mprenom = "Earvin", string mnom = "Kayonga", int mage = 23){
		      prenom = mprenom;
		      nom = mnom;
		      age = mage;
	};
	void hasFriends(Person mfriend);
	void say(string);
	void showFriends();
	string toString();
	vector<Person> Friends();

	Person();
};
