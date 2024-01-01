/*
	Group Project 
	Wardah Fatima (f-301056)
    Tayabba Fatima Zafar (f-301012)
	Abdul Wahab	(f-301025)
*/

#include "Address.h"

Address :: Address()
{
    house = "";
    locality = "";
    city = "";
}

Address :: Address(string a, string b, string c)
{
    house = a;
    locality = b;
    city = c;
}

void Address :: setHouse(string a)
{
    house = a;
}

string Address :: getHouse()
{
    return house;
}

void Address :: setLocality(string b)
{
    locality = b;
}

string Address :: getLocality()
{
    return locality;
}

void Address :: setCity(string c)
{
    city = c;
}

string Address :: getCity()
{
    return city;
}

Address :: ~Address()
{
    
}
