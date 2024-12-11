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

// Funktion zur Verwaltung der Mitarbeiterliste
void angestelltenverwaltung();

#if 0
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
#else
int main(void)
{
    angestelltenverwaltung();
}
#endif


// Funktion zur Verwaltung der Mitarbeiterliste
void angestelltenverwaltung() {
    std::vector<werkstatt> mitarbeiterListe;
    int auswahl;

    do {
        std::cout << "\nAngestelltenverwaltung:\n";
        std::cout << "1. Mitarbeiter hinzufügen\n";
        std::cout << "2. Mitarbeiter anzeigen\n";
        std::cout << "3. Mitarbeiter entfernen\n";
        std::cout << "4. Beenden\n";
        std::cout << "Ihre Auswahl: ";
        std::cin >> auswahl;

        switch (auswahl) {
        case 1: {
            int id;
            std::string name, abteilung;
            std::cout << "Mitarbeiter ID: ";
            std::cin >> id;
            std::cin.ignore(); // Eingabepuffer leeren
            std::cout << "Name: ";
            std::getline(std::cin, name);
            std::cout << "Abteilung: ";
            std::getline(std::cin, abteilung);

            mitarbeiterListe.emplace_back(id, name, abteilung);
            std::cout << "Mitarbeiter hinzugefügt!\n";
            break;
        }
        case 2: {
            std::cout << "\nListe der Mitarbeiter:\n";
            for (const auto& mitarbeiter : mitarbeiterListe) {
                mitarbeiter.anzeigen();
            }
            break;
        }
        case 3: {
            int id;
            std::cout << "ID des zu entfernenden Mitarbeiters: ";
            std::cin >> id;

            auto it = std::remove_if(mitarbeiterListe.begin(), mitarbeiterListe.end(),
                [id](const Mitarbeiter& mitarbeiter) {
                    return mitarbeiter.getId() == id;
                });

            if (it != mitarbeiterListe.end()) {
                mitarbeiterListe.erase(it, mitarbeiterListe.end());
                std::cout << "Mitarbeiter entfernt!\n";
            }
            else {
                std::cout << "Mitarbeiter mit ID " << id << " nicht gefunden!\n";
            }
            break;
        }
        case 4:
            std::cout << "Programm beendet.\n";
            break;
        default:
            std::cout << "Ungültige Auswahl. Bitte erneut versuchen.\n";
        }

    } while (auswahl != 4);
}