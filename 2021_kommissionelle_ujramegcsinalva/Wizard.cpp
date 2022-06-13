#include "Wizard.h"
#include "Instant.h"
#include "Sorcery.h"
#include <iostream>
using namespace std;

Wizard::Wizard(std::string name)
{
	
	mana = 20;
	for(int i = 0; i <= 7; i++)
	{
		if(rand() % 2 == 0)
		{
			//this->spells[i] = new Instant();
			Instant* uj = new Instant();
			this->spells.push_back(uj);
			if (rand() % 2 == 0) {
				//this->spells[i]->getType();
			}
		}
		else
		{
			Sorcery* uj = new Sorcery();
			this->spells.push_back(uj);
		}
		
	}
	
}

Wizard::~Wizard()
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < spells.size(); j++)
		{
			delete spells[i];
		}
	}
}

void Wizard::print()
{
	cout << "Wizard " << this->name << " has " << this->mana << " mana" << endl;
}

void Wizard::castSpell(Wizard* target)
{
	if (target == nullptr) {
		throw std::invalid_argument("Pointer was nullpointer");
	}
	
	spells[0]->cast(target); // itt volt a 0 helyett spells.size()
	spells.erase(spells.begin());
	
}

bool Wizard::spellsLeft()
{
	if(spells.size() > 0)
	{
		return true;
	}
	else
	{
		return false;
	}
	
}

