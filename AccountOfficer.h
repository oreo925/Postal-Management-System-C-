/*
	Group Project 
	Wardah Fatima (f-301056)
    Tayabba Fatima Zafar (f-301012)
	Abdul Wahab	(f-301025)
*/

#ifndef ACCOUNTOFFICER_H
#define ACCOUNTOFFICER_H

#include "PostalWorkers.h"

#include <iostream>
#include <string>
#include <conio.h>
#include <fstream>

using namespace std;

class AccountOfficer : public PostalWorkers
{
    private:



    public:

        AccountOfficer();
        void SignUp();
        void SignIn();
        ~AccountOfficer();
};

#endif
