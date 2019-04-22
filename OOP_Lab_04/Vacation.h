#pragma once
#include "Pass.h"
class Vacation : public Pass
{
private:
	int coustday;
	int fare; //vartist proizdy

public:
	Vacation();
	Vacation(string country, int time, int coustday, int fare);
	~Vacation();

	void SetCoust(int coust);
	int GetCoust();

	void SetFare(int fare);
	int GetFare();

	int CoustPass();
	int FullAmount();

};

