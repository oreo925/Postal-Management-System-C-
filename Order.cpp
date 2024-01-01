/*
	Group Project 
	Wardah Fatima (f-301056)
    Tayabba Fatima Zafar (f-301012)
	Abdul Wahab	(f-301025)
*/

#include "Invoice.cpp"
#include "Order.h"

Order :: Order()
{
    ID = 999;
    weight = 0;
    dimensions = "";
    duration = "";
    senderAddress = "";
    senderContact = "";
    receiverAddress = "";
    receiverContact = "";
}

void Order :: setParcelDetails(string cnic)
{
    string house, locality, city;

    cout << "\n\t ************************* \n";
    cout << "\n\t YOUR PARCEL ORDER DETAILS \n";
    cout << "\n\t ************************* \n";

    cout << "\n Please enter all the relevant information. \n";

    file.open("Parcel.txt");
    file.close();

    cout << "\n Enter weight : ";
    cin >> weight;

    cin.ignore();

    cout << "\n Enter dimensions : ";
    getline(cin, dimensions);

    cout << "\n Enter duration : ";
    getline(cin, duration);

    cout << "\n Enter sender house number : ";
    getline(cin, house);

    cout << "\n Enter sender locality : ";
    getline(cin, locality);

    cout << "\n Enter sender city : ";
    getline(cin, city);

    senderAddress = house + " " + locality + " " + city;

    cout << "\n Enter sender contact : ";
    getline(cin, senderContact);

    cout << "\n Enter receiver house number : ";
    getline(cin, house);

    cout << "\n Enter receiver locality : ";
    getline(cin, locality);

    cout << "\n Enter receiver city : ";
    getline(cin, city);

    receiverAddress = house + " " + locality + " " + city;

    cout << "\n Enter receiver contact : ";
    getline(cin, receiverContact);

    ID++;

    file.open("Parcel.txt", ios :: app);

    file << cnic << " " << ID << " " << weight << " " << dimensions << " " << duration << " " << senderAddress << " " << senderContact << " " << receiverAddress << " " << receiverContact << endl;

    file.close();

    cout << "\n\n Parcel order has been placed successfully!!";
    cout << "\n\n Please proceed";

    system("CLS");

    I.getParcelDetails(ID, weight, dimensions, duration, senderAddress, senderContact, receiverAddress, receiverContact);
}

void Order :: traceParcelDetails(string cnic)
{
    string _cnic, dimensions, duration, senderHouse, senderLocality, senderCity, senderContact, receiverHouse, receiverLocality, receiverCity, receiverContact;
    int ID, weight;

    file.open("Parcel.txt");

    while(!file.eof())
    {
        file >> _cnic >> ID >> weight >> dimensions >> duration >> senderHouse >> senderLocality >> senderCity >> senderContact >> receiverHouse >> senderLocality >> senderCity >> receiverContact;

        if(_cnic == cnic)
        {
            cout << "\n\n Order ID : " << ID;
            cout << "\n\n Weight : " << weight;
            cout << "\t Dimensions : " << dimensions;
            cout << "\t Duration : " << duration;
            cout << "\n\n Sender's Address : " << senderHouse << " " << senderLocality << " " << senderCity;
            cout << "\n\n Sender's Contact : " << senderContact;
            cout << "\n\n Receiver's Address : " << receiverHouse << " " << receiverLocality << " " << receiverCity;
            cout << "\n\n Receiver's Contact : " << receiverContact;
            cout << "\n\n Status : Pending";

            cout << "\n\n";
        }
    }

    file.close();

    cout << "\n\n Back to Main";
}

Order :: ~Order()
{

}
