#pragma once
#include "Arbeitgeber.h"
#include "Arbeitnehmer.h"

class chef :public arbeitgeber , public arbeitnehmer
{
public:
	chef();
	~chef();

	void setzeSekret�rin(std::string skret�rin);

private:
	std::string nameDerSekret�rin;
};