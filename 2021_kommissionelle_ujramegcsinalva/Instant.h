#pragma once
#include "Spell.h"
class Instant : public Spell
{
public:
	Instant();
	int damage = 1;
	int heal = 2;
protected:
	int power;
private:
	void cast(Wizard* target);
	
};

