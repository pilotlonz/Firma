#include "Person.h"

//Standardkonstruktor
person::person() : name(""), adresse(""), gebDatum("")
{

}

//Überladener Konstruktor
person::person(std::string Name, std::string Adresse, std::string GebDatum)
	: name(Name), adresse(Adresse), gebDatum(GebDatum)
{
}

//Destruktor
person::~person()
{

}
void person::setzeDaten(std::string Name, std::string Adresse, std::string GebDatum)
{
	name = Name;
	adresse = Adresse;
	gebDatum = GebDatum;

}
//Überladene Funktion
void person::setzeDaten(std::string GebDatum)
{
	gebDatum = GebDatum;
}

std::string person::holeGebDatum(void)
{
	return gebDatum;
}


using namespace std;
sparer::sparer(){}
sparer::~sparer(){}

std::string sparer::holeGebDatum(void)
{
	string zurueck;
	zurueck = person::holeGebDatum();
	zurueck.append(" :Hallo Welt ");
	return zurueck;
}
