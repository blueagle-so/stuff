#include <cstddef>
#include "Clothings.h"
#include "IRanger.h"
#include <string>
#include <iostream>
#define null "" 
using namespace std;
class ClothingsDecorator : public CharacterDecorator{
	protected: Clothings clothings;//поле clothings типа Clothings
	//Конструктор с параметрами ranger....  и clothings
	public: ClothingsDecorator(IRanger* rangerCharacterDecorator, Clothings clothings):CharacterDecorator(rangerCharacterDecorator){
		
		//CharacterDecorator(rangerCharacterDecorator);//=rangerCharacterDecorator;
		//полю clothings присваивается параметр clothings
		this->clothings = clothings;
		}

	//@Override
	string getStrength() {
		rangerCharacterDecorator->getStrength();
		return null;
	}

	//@Override
	string getDexterity() {
		rangerCharacterDecorator->getDexterity();
		return null;
	}

	//@Override
	string getConstitution() {
		rangerCharacterDecorator->getConstitution();
		return null;
	}

	//@Override
	string getIntelligence() {
		rangerCharacterDecorator->getIntelligence();
		return null;
	}

	//@Override
	string getWisdom() override{
		rangerCharacterDecorator->getWisdom();
		return "string";
	}

	//@Override
	string getCharisma() override{
		rangerCharacterDecorator->getCharisma();
		return "";
	}

	//@Override
	string getClothings() override {
		rangerCharacterDecorator->getClothings();
		cout<<"XYR Character Clothings Option: " << cloth[clothings] <<endl;
		return "XYR Character Clothings Option: ";// + clothings;
	}

};
