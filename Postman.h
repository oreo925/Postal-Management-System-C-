/*
	Group Project 
	Wardah Fatima (f-301056)
    Tayabba Fatima Zafar (f-301012)
	Abdul Wahab	(f-301025)
*/

#ifndef POSTMAN_H
#define POSTMAN_H

#include "PostalWorkers.h"

#include <iostream>
#include <string>
#include <conio.h>
#include <fstream>

using namespace std;

class Postman : public PostalWorkers
{
    private:



    public:

        Postman();
        void SignUp();
        void SignIn();
        ~Postman();
};

#endif
