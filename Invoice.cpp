/*
	Group Project 
	Wardah Fatima (f-301056)
    Tayabba Fatima Zafar (f-301012)
	Abdul Wahab	(f-301025)
*/

#include "Payment.cpp"
#include "Invoice.h"

Invoice :: Invoice()
{

}

void Invoice :: getParcelDetails(int ID, int weight, string dimensions, string duration, string senderAddress, string senderContact, string receiverAddress, string receiverContact)
{
    int bill;

    cout << "\n\n";
    cout << "\n\t ************************ \n";
    cout << "\n\t PARCEL INVOICE GENERATED \n";
    cout << "\n\t ************************ \n";

    cout << "\n\n Order ID : " << ID;
    cout << "\n\n Weight : " << weight;
    cout << "\t Dimensions : " << dimensions;
    cout << "\t Duration : " << duration;
    cout << "\n\n Sender's Address : " << senderAddress;
    cout << "\n\n Sender's Contact : " << senderContact;
    cout << "\n\n Receiver's Address : " << receiverAddress;
    cout << "\n\n Receiver's Contact : " << receiverContact;

    bill = P.calculateBill(weight);
    P.calculateStamps(bill);

    cout << "\n\n\n Bill : Rs." << bill;

    cout << "\n\n Back to Main";
}

Invoice :: ~Invoice()
{

}
