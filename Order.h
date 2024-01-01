/*
	Group Project 
	Wardah Fatima (f-301056)
    Tayabba Fatima Zafar (f-301012)
	Abdul Wahab	(f-301025)
*/

#ifndef ORDER_H
#define ORDER_H

#include "Customers.h"
#include "Invoice.h"

#include <iostream>
#include <string>
#include <conio.h>
#include <fstream>

using namespace std;

class Order
{
    protected:

        int ID;
        int weight;
        string dimensions;
        string duration;
        string senderAddress;
        string senderContact;
        string receiverAddress;
        string receiverContact;
        fstream file;

        Customers C;
        Invoice I;

    public:

        Order();
        void setParcelDetails(string);
        void traceParcelDetails(string);
        ~Order();
};

#endif
