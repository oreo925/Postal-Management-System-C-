/*
	Group Project 
	Wardah Fatima (f-301056)
    Tayabba Fatima Zafar (f-301012)
	Abdul Wahab	(f-301025)
*/

#ifndef CLERK_H
#define CLERK_H

#include "PostalWorkers.h"

#include <iostream>
#include <string>
#include <conio.h>
#include <fstream>

using namespace std;

class Clerk : public PostalWorkers
{
    private:



    public:

        Clerk();
        void SignUp();
        void SignIn();
        ~Clerk();
};

#endif
