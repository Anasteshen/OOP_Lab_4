#include "Vacation.h"

Vacation::Vacation()
{
}

Vacation::Vacation(string country, int time, int coustday, int fare) : Pass(country, time)
{
	this->coustday = coustday;
	this->fare = fare;
}

Vacation::~Vacation()
{
}

void Vacation::SetCoust(int coust)
{
	this->coustday = coust;
}

int Vacation::GetCoust()
{
	return fare;
}

void Vacation::SetFare(int fare)
{
	this->fare = fare;
}

int Vacation::GetFare()
{
	return fare;
}

int Vacation::CoustPass()
{
	int a = this->GetTime();																			
	int coustpass = a*coustday;

	return coustpass;
}

int Vacation::FullAmount()
{
	int a = this->GetTime();
	int amount = a*coustday + fare;

	return amount;
}