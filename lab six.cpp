#include <iostream>
#include <string>
using namespace std;


class Pokemon
{
protected:
	string name;
	int id;
	int level;
	int health;
public:


	void setname(string n) { name = n; }
	void setid(int i) { id = i; }
	void setlevel(int lvl) { level = lvl; }
	void sethp(int hp) { health = hp; }
	

	virtual void PunchAttack() {};
	virtual void KickAttack() {};
	virtual void SpecialAttack() {};

};


class Fire 
{
protected:
	int damage = 120;
public:


	virtual void PunchAttack() { cout << "PUNCH ATTTACK: Scratch" << damage << endl; }
	virtual void KickAttack() { cout << "KICK ATTACK: Stomp" << damage << endl; }
	virtual void SpecialAttack() { cout << "SPECIAL: Ember" << damage << endl; }
};



class Water 
{
protected:
	int damage =50;
public:
	
	virtual void PunchAttack() { cout << "PUNCH ATTTACK: pound" << damage << endl; }
	virtual void KickAttack() { cout << "KICK ATTACK: kick" << damage << endl; }
	virtual void SpecialAttack() { cout << "SPECIAL: drop" << damage <<endl; }
};


class Grass 
{
protected:
	int damage = 100;
public:
	


	virtual void PunchAttack() { cout << "PUNCH ATTTACK: scratch" << damage << endl; }
	virtual void KickAttack() { cout << "KICK ATTACK: whip" << damage << endl; }
	virtual void SpecialAttack() { cout << "SPECIAL: absorb" << damage << endl; }
};
class firepokeman : public Fire, public Pokemon
{
public:

	void punchattack()
	{
		cout << name << " firepunch " << damage << endl;
	}
	void kickattack()
	{
		cout << name << " stomp" << " does " << damage << endl;
	}
	void specialatk()
	{
		cout << name << " flame " << " does " << damage << endl;
	}
	void displaystats()
	{
		cout << name << " Id: " << id << endl;
		cout << name << " Level: " << level << endl;
		cout << name << " health: " << health << endl;
	}
};

class waterpokemon : public Water, public Pokemon
{
public:
	void punchattack()
	{
		cout << name << " drop " << "does " << damage << endl;
	}
	void kickattack()
	{
		cout << name << " spin kick " << " does " << damage << endl;
	}
	void specialatk()
	{
		cout << name << " water gun " << " does " << damage << endl;
	}
	void displaystats()
	{
		cout << name << " Id: " << id << endl;
		cout << name << " Level: " << level << endl;
		cout << name << " health: " << health << endl;
	}
};

class grasspokemon : public Grass, public Pokemon
{
public:
	void punchattack()
	{
		cout << name << " whip" << " does " << damage << endl;
	}
	void kickattack()
	{
		cout << name << " leaf attack " << " does " << damage << endl;
	}
	void specialatk()
	{
		cout << name << " beam " << " does " << damage << endl;
	}
	void displaystats()
	{
		cout << name << " Id: " << id << endl;
		cout << name << " Level: " << level << endl;
		cout << name << " health: " << health << endl;
	}

};



int main() {

	firepokeman Charmander;
	Pokemon *first = &Charmander;
	first->setname("Charmander");
	first->setid(4);
	first->setlevel(5);
	first->sethp(20);

	waterpokemon squirtle;
	Pokemon *third = &squirtle;
	third->setname("Squirtle");
	third->setid(7);
	third->setlevel(5);
	third->sethp(25);

	grasspokemon bulbasaur;
	Pokemon *second = &bulbasaur;
	second->setname("Bulbasaur");
	second->setid(1);
	second->setlevel(1);
	second->sethp(10);

	Charmander.displaystats();
	Charmander.firepokeman::punchattack();
	Charmander.firepokeman::kickattack();
	Charmander.firepokeman::specialatk();
	cout << endl;

	bulbasaur.displaystats();
	bulbasaur.grasspokemon::punchattack();
	bulbasaur.grasspokemon::kickattack();
	bulbasaur.grasspokemon::specialatk();
	cout << endl;



	squirtle.displaystats();
	squirtle.waterpokemon::punchattack();
	squirtle.waterpokemon::kickattack();
	squirtle.waterpokemon::specialatk();




	getchar();


	return 0;
}