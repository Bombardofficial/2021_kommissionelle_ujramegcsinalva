#pragma once
#include "Spell.h"
class Sorcery : public Spell
{
public:
	int debuff = 1;
	int buff = 2;
	Sorcery();
private:
	void cast(Wizard* target);
};

