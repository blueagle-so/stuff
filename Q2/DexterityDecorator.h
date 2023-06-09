#include "Dexterity.h"
#include "IRanger.h"
#include <iostream>
#include <string>
#define null "" 
using namespace std;
class DexterityDecorator : public CharacterDecorator{
	protected: Dexterity dexterity;

	public: DexterityDecorator(IRanger* rangerCharacterDecorator, Dexterity dexterity):CharacterDecorator(rangerCharacterDecorator){
		//super(rangerCharacterDecorator);
		this->dexterity = dexterity;
		//this->getDexterity();
		}

	//@Override
	string getStrength() {
		rangerCharacterDecorator->getStrength();
		return "test";
	}

	//@Override
	string getDexterity() override{
		rangerCharacterDecorator->getDexterity();
		cout<<"XYR Character Dexterity Option: "<<dex[dexterity]<<endl;
		return "test";
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
	string getWisdom() {
		rangerCharacterDecorator->getWisdom();
		return "";
	}

	//@Override
	string getCharisma() {
		rangerCharacterDecorator->getCharisma();
		
		return "";
	}

	//@Override
	string getClothings(){
		rangerCharacterDecorator->getClothings();
		return "";
	}

};
