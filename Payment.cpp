/*
	Group Project 
	Wardah Fatima (f-301056)
    Tayabba Fatima Zafar (f-301012)
	Abdul Wahab	(f-301025)
*/

#include "Payment.h"

Payment :: Payment()
{
    bill = 0;
    stamp5 = 0;
    stamp10 = 0;
    stamp20 = 0;
    stamp50 = 0;
    stamp100 = 0;
}

int Payment :: calculateBill(int weight)
{
    if(weight == 1)
    {
        bill = 100;
    }

    else if(weight > 1 && weight <= 3)
    {
        bill = 175;
    }

    else if(weight > 3 && weight <= 5)
    {
        bill = 250;
    }

    else if(weight > 5 && weight <= 10)
    {
        bill = 375;
    }

    else if(weight > 10 && weight <= 15)
    {
        bill = 500;
    }

    else if(weight > 15 && weight <= 20)
    {
        bill = 625;
    }

    else if(weight > 20 && weight <= 25)
    {
        bill = 750;
    }

    else if(weight > 25 && weight <= 30)
    {
        bill = 875;
    }

    return bill;
}

void Payment :: calculateStamps(int bill)
{
    int total, stamp01, stamp02, stamp03, stamp04, stamp05;

    file.open("Payment.txt");

    file >> total >> stamp01 >> stamp02 >> stamp03 >> stamp04 >> stamp05;

    file.close();

    total = total + bill;

    while(bill >= 100)
    {
        bill = bill - 100;
        stamp100++;
    }

    while(bill >= 50)
    {
        bill = bill - 50;
        stamp50++;
    }

    while(bill >= 20)
    {
        bill = bill - 20;
        stamp20++;
    }

    while(bill >= 10)
    {
        bill = bill - 10;
        stamp10++;
    }

    while(bill >= 5)
    {
        bill = bill - 5;
        stamp5++;
    }

    stamp01 = stamp01 + stamp100;
    stamp02 = stamp02 + stamp50;
    stamp03 = stamp03 + stamp20;
    stamp04 = stamp04 + stamp10;
    stamp05 = stamp05 + stamp5;

    file.open("Payment.txt");

    file << total << " " << stamp01 << " " << stamp02 << " " << stamp03 << " " << stamp04 << " " << stamp05 << endl;

    file.close();
}

Payment :: ~Payment()
{

}
