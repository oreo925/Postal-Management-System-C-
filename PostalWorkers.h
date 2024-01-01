/*
	Group Project 
	Wardah Fatima (f-301056)
    Tayabba Fatima Zafar (f-301012)
	Abdul Wahab	(f-301025)
*/

#ifndef POSTALWORKERS_H
#define POSTALWORKERS_H

#include <iostream>
#include <string>
#include <conio.h>
#include <fstream>

using namespace std;

class PostalWorkers
{
    protected:

        string cnic;
        string name;
        string password;
        string _password;
        string number;
        fstream file;

    public:

        PostalWorkers();
        virtual void SignUp();
        ~PostalWorkers();
};

#endif
