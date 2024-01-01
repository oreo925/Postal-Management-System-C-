/*
	Group Project 
	Wardah Fatima (f-301056)
    Tayabba Fatima Zafar (f-301012)
	Abdul Wahab	(f-301025)
*/

#ifndef PAYMENT_H
#define PAYMENT_H

#include <iostream>
#include <string>
#include <conio.h>
#include <fstream>

using namespace std;

class Payment
{
    protected:

        int total;
        int bill;
        int stamp5;
        int stamp10;
        int stamp20;
        int stamp50;
        int stamp100;
        fstream file;

    public:

        Payment();
        int calculateBill(int);
        void calculateStamps(int);
        ~Payment();
};

#endif
