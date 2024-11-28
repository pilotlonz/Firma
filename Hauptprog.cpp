#include <iostream>
#include "Person.h"
#include "Chef.h"



int main(void)
{

}




















#if 0
int main(void)
{
	person Person1;//hier wird der Standardkonstruktor gerufen
	person Person2("Karl Napf", "Panoramaweg 1", "07.09.1969");
	arbeitnehmer Person3;
	arbeitgeber Person4;
	chef Scheffe;
	lehrling stift;

	sparer Landerer("Karl Napf", "Panoramaweg 1", "07.09.1969");
	sparer hans;

	hans.setzeDaten("Hans Dampf", "Postweg 101", "31.12.1996");
	std::cout << hans.holeGebDatum() << "\n";

	Person3.person::setzeDaten("Hans Dampf", "Postweg 101", "31.12.1996");
	Person4.setzeDaten("Franz dumpf", "Postweg 102", "01.12.1986");
	std::cout << Person1.holeGebDatum() << "\n";
	std::cout << Person2.holeGebDatum() << "\n";
	std::cout << Person3.holeGebDatum() << "\n";
	std::cout << Person4.holeGebDatum() << "\n";
	Person2.setzeDaten("31.12.1996");
	std::cout << Person2.holeGebDatum() << "\n";
	Person3.setzeDaten(3);
	std::cout << Person3.holeGebDatum() << "\n";
	std::cout << Scheffe.person::holeGebDatum() << "\n";
	Scheffe.setzeGehalt(12345);
	stift.person::setzeDaten("12.12.2010");
	std::cout << stift.person::holeGebDatum() << "\n";

	
}

#endif