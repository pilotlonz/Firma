#include "Person.h"

//Standardkonstruktor
person::person() : name(""), adresse(""), gebDatum(""), geschlecht("")
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
void person::setzeDaten(std::string Name, std::string Adresse, std::string GebDatum, std::string Geschlecht)
{
	name = Name;
	adresse = Adresse;
	gebDatum = GebDatum;
	geschlecht = Geschlecht;
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
std::string person::holeNamen(void)
{
	return name;
}

std::string person::holeAdresse(void)
{
	return adresse;
}
std::string person::holeGeschlecht(void)
{
	return geschlecht;
}

using namespace std;
sparer::sparer(){}
sparer::~sparer(){}

std::string sparer::holeGebDatum(void)
{
	string zurueck;
	zurueck = person::holeGebDatum();
	zurueck.append(" :Das ist mein Geburtsdatum ");
	return zurueck;
}
