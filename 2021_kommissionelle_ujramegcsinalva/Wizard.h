#pragma once
#include <string>
#include <vector>
#include "Spell.h"

class Wizard
{
public:
	Wizard(std::string name);
	~Wizard();
	void print();
	void castSpell(Wizard* target);
	bool spellsLeft();
	//void modMana(int plusValue);
	//void looseSpell();
	//void gainSpell();
	//int getMana();

	std::string name;
	int mana;
	
	//Spell* spells[7];
	
	std::vector<Spell*> spells;
private:
	
};

