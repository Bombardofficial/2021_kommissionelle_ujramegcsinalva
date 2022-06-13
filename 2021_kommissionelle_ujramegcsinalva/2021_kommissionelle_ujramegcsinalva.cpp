#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "Wizard.h"
#include "Spell.h"
#include "Instant.h"
#include "Sorcery.h"
#include <exception>

int main()
{
    srand(time(NULL)); //Initializing random seed

    Wizard wizOne = Wizard("Xardas"); //Creating the wizards
    Wizard wizTwo = Wizard("Pyrokar");
	
    while (wizOne.spellsLeft() || wizTwo.spellsLeft())
    {//Casting spells until no spells are left
        
        if (wizOne.spellsLeft()) {
			
            try {
                if (wizOne.spells[wizOne.spells.size() - 1]->getType() == 1) {
                    wizOne.castSpell(&wizTwo);
                }
                else {
					wizOne.castSpell(&wizOne);
                }
                std::cout << "Spell has been casted by wizOne" << std::endl;
                std::cout << "Remaining spells:" << wizOne.spells.size() << std::endl;
            }
            catch (std::invalid_argument& err) {
                std::cerr << "invalid argument." << std::endl;
            }
        }
           
        if (wizTwo.spellsLeft()) {
            
            try {
                if (wizTwo.spells[wizTwo.spells.size() - 1]->getType() == 1) {
                    wizTwo.castSpell(&wizOne);
                }
                else {
                    wizTwo.castSpell(&wizTwo);
                }
				std::cout << "Spell has been casted by wizTwo" << std::endl;
                std::cout << "Remaining spells:" << wizTwo.spells.size() << std::endl;
            }
            catch (std::invalid_argument& err) {
                std::cerr << "invalid argument." << std::endl;
            }
        } 
    }

    wizOne.print(); //Print final state
    wizTwo.print();

    return 0;
}
