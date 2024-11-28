#pragma once
#include "Arbeitgeber.h"
#include "Arbeitnehmer.h"

class chef :public arbeitgeber , public arbeitnehmer
{
public:
	chef();
	~chef();

	void setzeSekretärin(std::string skretärin);

private:
	std::string nameDerSekretärin;
};