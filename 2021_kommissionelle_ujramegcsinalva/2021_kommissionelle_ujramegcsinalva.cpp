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
    srand((unsigned int)time(NULL)); //Initializing random seed

    Wizard wizOne = Wizard("Xardas"); //Creating the wizards
    Wizard wizTwo = Wizard("Pyrokar");

    for (int i = 0; i <= wizOne.spells.size(); ++i)
        std::cout << "Value of vector at " << i << " is " << wizOne.spells[i] << std::endl;
    /*while (wizOne.spellsLeft() || wizTwo.spellsLeft())
    {//Casting spells until no spells are left
        if (wizOne.spellsLeft()) {
			
            try {
                if (wizOne.spells[0]->getType() == 1) {
                    wizOne.castSpell(&wizTwo);
                }
                else {
					wizOne.castSpell(&wizOne);
                }
                
            }
            catch (...) {
                std::cerr << "invalid argument." << std::endl;
            }
        }
           
        if (wizTwo.spellsLeft()){
			
            try {
                if (wizTwo.spells[0]->getType() == 1) {
                    wizTwo.castSpell(&wizOne);
                }
                else {
                    wizTwo.castSpell(&wizTwo);
                }
            }
            catch (...) {
                std::cerr << "invalid argument." << std::endl;
            }
        } 
    }*/

    wizOne.print(); //Print final state
    wizTwo.print();

    return 0;
}
