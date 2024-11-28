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


innendienst::innendienst() : pSA_Schuhe(false), pSA_Brille(false), pSA_Handschuhe(false), pSA_Warnweste(false), pSA_ESD(false)
{
}
innendienst::~innendienst()
{

}

void innendienst::setzePSA(void)
{
	pSA_ESD = true;

}


werkstatt::werkstatt()
{

}
werkstatt::~werkstatt()
{

}
void werkstatt::setzePSA(void)
{
	pSA_Schuhe = true;
	pSA_Brille = true;
	pSA_Handschuhe = true;
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
