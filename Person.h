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
	void setzeDaten(std::string Name, std::string Adresse, std::string GebDatum);
	//Überladene Funktioin
	void setzeDaten(std::string GebDatum);
	std::string holeGebDatum(void);
private:

protected:
	std::string name, adresse, gebDatum;

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