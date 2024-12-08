#include <iostream>
#include "Person.h"
#include "Chef.h"

/*Hauptaufgabe: Wir entwickeln uns eine kleine Firmen-Verwaltungs-SW um 
				verschiedene Rollen einer Firma nach und nach mit Leben 
				zu befüllen.
				Zu diesem Zweck entwickeln wir uns im ersten Schritt nach 
				und nach einen Ableitungsbaum der verschiedenen Rollen
				beinhaltet.
				DIeses Main dient zum Test der verschiedenen Funktionalitäten.*/


#if 1
int main(void)
{
	person Person1;//hier wird der Standardkonstruktor gerufen
	person Person2("Karl Napf", "Panoramaweg 1", "07.09.1969");
	arbeitnehmer Person3;
	arbeitgeber Person4;
	chef Scheffe;
	lehrling stift;
	werkstatt karle, franz;
	buero frauke;
	lager klaus;
	sekretaerin lisa;

	lisa.setzePSA(false,false);
	
	std::cout << "Werkstattmitarbeiter Karle: ";
	karle.person::setzeDaten("Karl Karlson", "Heubergweg 25", "07.07.1970", "männlich");
	std::cout << karle.holeNamen() << "  " << karle.holeAdresse() << "  " << karle.holeGebDatum() << "  " << karle.holeGeschlecht() << "\n";
	
	std::cout << "Lagermitarbeiter Klaus: ";
	klaus.person::setzeDaten("Klaus Der Staplerfahrer", "Friedhofsweg 23", "01.08.1985", "männlich");
	std::cout << klaus.holeNamen() << "  " << klaus.holeAdresse() <<  "  " << klaus.holeGebDatum() << "  " << klaus.holeGeschlecht() << "\n";

//	sparer Landerer("Karl Napf", "Panoramaweg 1", "07.09.1969");
//	sparer hans;

//	hans.setzeDaten("Hans Dampf", "Postweg 101", "31.12.1996");
//	std::cout << hans.holeGebDatum() << "\n";

	
//	Person3.person::setzeDaten("Hans Dampf", "Postweg 101", "31.12.1996");
	//Person4.setzeDaten("Franz dumpf", "Postweg 102", "01.12.1986");
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