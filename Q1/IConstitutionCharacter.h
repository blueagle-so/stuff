#include <iostream>
using namespace std;
class IConstitutionCharacter {
	public:
	virtual void constitution()=0;
};
class ConstitutionFrail : public IConstitutionCharacter{

        //@Override
	public:
		void constitution() override {
                cout<<"This Constitution innate abilities has Frail Characteristics."<<endl;
        }

};
class ConstitutionHealthy : public IConstitutionCharacter{

        //@Override
	public:
		void constitution() override {
                cout<<"This Constitution innate abilities has Healthy Characteristics."<<endl;
        }

};

class ConstitutionSick : public IConstitutionCharacter{

        //@Override
	public:
		void constitution() override {
                cout<<"This Constitution innate abilities has Sick Characteristics."<<endl;
        }

};

class ConstitutionStrong : public IConstitutionCharacter{

        //@Override
	public:
		ConstitutionStrong(){};
		void constitution() override{
                cout<<"This Constitution innate abilities has Strong Characteristics."<<endl;
        }

};



