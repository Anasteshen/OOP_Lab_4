#include "Pass.h"
#include <string>
using namespace std;

Pass::Pass()
{
}

Pass::Pass (string country, int time)
{
	this->country = country;
	this->time = time;

}


Pass::~Pass()
{
}

void Pass::SetCountry( string count)
{
	string country = count;
}

string Pass::GetCountry()
{
	return country;
}

void Pass::SetTime(int time)
{
	this->time = time;
}

int Pass::GetTime()
{
	return time;
}
