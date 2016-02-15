#ifndef		PERSON_H
#define		PERSON_H

#include <vector>
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
	
	void	hasFriends(Person mfriend);
	void	say(const string something);
	void	showFriends();
	string	toString();
	int	getAge();
	string	getName();
	string	getFirstname();
	void	setAge(const int age);
	void	setName(const string name);
	void	setFirstname(const string name);
	
	vector<Person> Friends();

	Person();
};

#endif
