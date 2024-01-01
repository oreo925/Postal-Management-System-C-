/*
	Group Project 
	Wardah Fatima (f-301056)
    Tayabba Fatima Zafar (f-301012)
	Abdul Wahab	(f-301025)
*/

#ifndef INVOICE_H
#define INVOICE_H

#include "Payment.h"

#include <iostream>
#include <string>
#include <conio.h>
#include <fstream>

using namespace std;

class Invoice
{
    protected:

        Payment P;

    public:

        Invoice();
        void getParcelDetails(int, int, string, string, string, string, string, string);
        void getMailDetails();
        ~Invoice();
};

#endif
