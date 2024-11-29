#include "Arbeitnehmer.h"

//Abgeleitete Klasse Arbeitnehmer
arbeitnehmer::arbeitnehmer() :abteilung(0), gehalt(0.0)
{

}
arbeitnehmer::~arbeitnehmer()
{

}
void arbeitnehmer::setzeDaten(unsigned int Abteilung)
{
	abteilung = Abteilung;
}
void arbeitnehmer::setzeGehalt(double Gehalt)
{
	gehalt = Gehalt;
}



aussendienst::aussendienst() : gehaltszulage(0.0)
{

}
aussendienst::~aussendienst()
{

}
void aussendienst::setzeZulage(double zulage)
{
	gehaltszulage = zulage;
}


innendienst::innendienst() : pSA_Schuhe(false), pSA_Brille(false), pSA_Handschuhe(false), pSA_Warnweste(false), pSA_ESD(false), pSA_PSA(false)
{
}
innendienst::~innendienst()
{

}

void innendienst::setzePSA(bool PSA, bool ESD)
{
	pSA_ESD = true;

}


werkstatt::werkstatt()
{

}
werkstatt::~werkstatt()
{

}
void werkstatt::setzePSA(bool handschuhe, bool brille, bool schuhe)
{
	pSA_Schuhe = schuhe;
	pSA_Brille = brille;
	pSA_Handschuhe = handschuhe;

	innendienst::setzePSA(true, true);
}

lager::lager()
{

}
lager::~lager()
{

}


buero::buero()
{

}
buero::~buero()
{

}


lehrling::lehrling()
{

}
lehrling::~lehrling()
{

}
