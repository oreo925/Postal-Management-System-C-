/*
	Group Project 
	Wardah Fatima (f-301056)
    Tayabba Fatima Zafar (f-301012)
	Abdul Wahab	(f-301025)
*/

#ifndef ADDRESS_H
#define ADDRESS_H

#include <iostream>

using namespace std;

class Address
{
    private:

        string house;
        string locality;
        string city;
    
    public:

        Address();
        Address(string, string, string);
        void setHouse(string);
        string getHouse();
        void setLocality(string);
        string getLocality();
        void setCity(string);
        string getCity();
        ~Address();
};

#endif
