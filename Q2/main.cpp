#include "CharismaDecorator.h"
#include "ClothingsDecorator.h"
#include "ConstitutionDecorator.h"
#include "DexterityDecorator.h"
#include "IntelligenceDecorator.h"
#include "StrengthDecorator.h"
#include "WisdomDecorator.h"
//#include "Charisma.h"
#include "Clothings.h"
//#include "Constitution.h"
//#include "Dexterity.h"
//#include "Intelligence.h"
//#include "Strength.h"
//#include "Wisdom.h"
#include "ICharacter.h"
#include "IRanger.h"
#include "RangerCharacter.h"
#include <iostream>
#include <string>
using namespace std;
int main() {
		RangerCharacter* ranger= new RangerCharacter(); 
		cout<<(ranger->getClothings())<<endl;
		RangerCharacter* cloths = new RangerCharacter();
		//cout<<Charisma::leadership<<endl;
		//for (Clothings clothes : Clothings.values()){
		//typedef Iterator<Clothings, Clothings::armour, Clothings::cloaks> CIterator;
		for (int i=0; i<=cloaks; i++ ){
		//ICharacter* Character = new ClothingsDecorator(cloths, (Clothings)i);
		cout<<cloth[i]<<endl;
		//cout<<Character->getClothings()<<endl; 
		}
		
		//IRanger* rangerCharacter = new CharismaDecorator(new ConstitutionDecorator(new DexterityDecorator(new IntelligenceDecorator(new StrengthDecorator(new WisdomDecorator(new ClothingsDecorator(new RangerCharacter(),Clothings::armour), Wisdom::empathy),Strength::plump), Intelligence::simple),Dexterity::akward), Constitution::healthy),Charisma::leadership);
		//IRanger* rangerCharacter = new CharismaDecorator(new RangerCharacter(), Charisma::leadership);
		//((ClothingsDecorator*)(rangerCharacter))->getClothings();
		//cout<<(rangerCharacter)->getCharisma();
		//((ConstitutionDecorator*)(rangerCharacter))->getConstitution();
		//rangerCharacter->getDexterity();
		//rangerCharacter->getIntelligence();
		//rangerCharacter->getStrength();
		//rangerCharacter->getWisdom();
//------------------------------------------------------------------
		//обьект RangerCharacter как выше только по шагам	
		RangerCharacter* c = new RangerCharacter();
		//теперь переменная c содержит RangerCharacter и после етой строчки вызывается конструктор
		//ClothingDecorator обьект с параметрами(RangerCharacter) и Closing::armour(0)
		ClothingsDecorator* cd = new ClothingsDecorator(c, Clothings::armour);		
		//вызов getClosings() обьектом cd(ClosingsDecorator) из файла ClosingsDecorator.h
                //cd->getClothings();
		//вывод XYR Character Clothings Option: 0   0 - Clothings::armour из Closings.h  первый элемент из enum 
	//----------------------------------------------------------	
		WisdomDecorator* wd = new WisdomDecorator(cd, Wisdom::foolish);
		wd->getClothings();
		wd->getWisdom();

		/*
		StrengthDecorator* sd = new StrengthDecorator(wd, Strength::burly);
		IntelligenceDecorator* id = new IntelligenceDecorator(sd, Intelligence::inquisitive);
		DexterityDecorator* dd = new DexterityDecorator(id, Dexterity::sneaky);
		ConstitutionDecorator* cnd = new ConstitutionDecorator(dd, Constitution::strong);
		CharismaDecorator* cd1 = new CharismaDecorator(cnd, Charisma::confidence);
		*/
		//ICharacter BarbarianCharacter = cd1;
		//BarbarianCharacter.getClothings(); 
		//BarbarianCharacter.getCharisma();
		//BarbarianCharacter.getConstitution();
		//BarbarianCharacter.getDexterity();
		//BarbarianCharacter.getIntelligence();
		//BarbarianCharacter.getStrength();
		//BarbarianCharacter.getWisdom();
		
		//cout<<(ranger.getClothings())<<endl;
		//for (Clothings clothes : Clothings.values()) {
		//ICharacter Character = new ClothingsDecorator(c, clothes);
		//Character.getClothings();
		//cout<<(Character.getClothings())<<endl; 
}
		
	

