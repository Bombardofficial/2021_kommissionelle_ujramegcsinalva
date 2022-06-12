#include "Instant.h"
#include <iostream>

Instant::Instant() : Spell(type) {
	
	this->power = rand() % 5 + 1;
	
	if(rand() % 2 == 0) {
		this->type = damage;
	}
	else {
		this->type = heal;
	}
}

void Instant::cast(Wizard* target)
{
	if(this->type == damage) {
		target->mana -= this->power;
	}
	else {
		target->mana += this->power;
	}
}
