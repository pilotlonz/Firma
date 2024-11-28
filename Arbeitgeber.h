#pragma once
#include "Person.h"

class arbeitgeber : public person
{
public:
	arbeitgeber();
	~arbeitgeber();

	void setzeFirma(std::string Firma);

private:
	std::string nameDerFirma;
};
