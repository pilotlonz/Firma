#pragma once
#include <string>

//using namespace std;
class person 
{
public:
	person();
	//Überladener Konstruktor
	person(std::string Name, std::string Adresse, std::string GebDatum);
	~person();
	void setzeDaten(std::string Name, std::string Adresse, std::string GebDatum, std::string Geschlecht);
	//Überladene Funktioin
	void setzeDaten(std::string GebDatum);
	std::string holeGebDatum(void);
	std::string holeNamen(void);
	std::string holeAdresse(void);
	std::string holeGeschlecht(void);

private:
	std::string name, adresse, gebDatum, geschlecht;

protected:
	
};










class sparer : public person
{
public:
	sparer();
	sparer(std::string Name, std::string Adresse, std::string GebDatum) : person(Name, Adresse, GebDatum)
	{}
	~sparer();
	std::string holeGebDatum(void);

private:

};