#pragma once
#include "Person.h"

//Abgeleitete Klasse Arbeitnehmer
class arbeitnehmer :public person
{
public:
	arbeitnehmer();
	~arbeitnehmer();
	void setzeDaten(unsigned int Abteilung);
	void setzeGehalt(double Gehalt);
private:
protected:
	unsigned int abteilung;
	double gehalt;
};

class aussendienst : public arbeitnehmer
{
public:
	aussendienst();
	~aussendienst();
	void setzeZulage(double zulage);
private:
	double gehaltszulage;
};

class innendienst : public arbeitnehmer
{
public: 
	innendienst();
	~innendienst();
	void setzePSA(void);
	bool pSA_Schuhe, pSA_Brille, pSA_Handschuhe, pSA_Warnweste, pSA_ESD;
private:

};

class werkstatt : public innendienst
{
public:
	werkstatt();
	~werkstatt();
	void setzePSA(void);

private:

};

class lager : public innendienst
{
public:
	lager();
	~lager();
private:

};

class buero : public innendienst
{
public:
	buero();
	~buero();
private:
};

class lehrling :public werkstatt, public lager, public buero
{
public: 
	lehrling();
	~lehrling();
private:
};