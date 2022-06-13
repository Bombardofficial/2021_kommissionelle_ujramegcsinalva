#include "Sorcery.h"
#include "Instant.h"
#include "Wizard.h"
#include <iostream>
Sorcery::Sorcery() : Spell(type)
{
	if (rand() % 2 == 0) {
		this->type = debuff;
	}
	else {
		this->type = buff;
	}
}

void Sorcery::cast(Wizard* target)
{
	if (this->type == debuff) {
		target->spells.erase(target->spells.end());
	}
	else {
		if(target->spells.size() < 7) {
			if (rand() % 2 == 0) {
				target->spells.push_back(new Instant());
			}
			else {
				target->spells.push_back(new Sorcery());
			}
			
		}
	}
}
