/*
	Group Project 
	Wardah Fatima (f-301056)
    Tayabba Fatima Zafar (f-301012)
	Abdul Wahab	(f-301025)
*/

#ifndef CUSTOMERS_H
#define CUSTOMERS_H

#include "Address.h"

#include <iostream>
#include <string>
#include <conio.h>
#include <fstream>

using namespace std;

class Customers
{
    protected:

        string cnic;
        string name;
        string password;
        string _password;
        string number;
        fstream file;

    public:

        Address *A;

        Customers();
        string getCnic();
        string getNumber();
        void SignUp();
        void SignIn();
        ~Customers();
};

#endif
