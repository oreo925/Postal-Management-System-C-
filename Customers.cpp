/*
	Group Project 
	Wardah Fatima (f-301056)
    Tayabba Fatima Zafar (f-301012)
	Abdul Wahab	(f-301025)
*/

#include "Address.cpp"
#include "Customers.h"

Customers :: Customers()
{
    cnic = "";
    name = "";
    password = "";
    _password = "";
    number = "";

    A = new Address;
}

string Customers :: getCnic()
{
    return cnic;
}

string Customers :: getNumber()
{
    return number;
}

void Customers :: SignUp()
{   
    char ch;
    bool flag1, flag2;
    string cnic, _cnic, house, locality, city;

    cout << "\n\t ********************** \n";
    cout << "\n\t SIGN UP A NEW CUSTOMER \n";
    cout << "\n\t ********************** \n";

    cout << "\n Please enter all the relevant information. \n";

    file.open("Customer.txt");
    file.close();

    do
    {
        flag1 = true;
        flag2 = true;

        cout << "\n *CNIC should be unique*";
        cout << "\n *CNIC should only have digits*";
        cout << "\n *CNIC size should be 13 without dashes*";

        cout << "\n\n Enter your CNIC : ";
        getline(cin, cnic);

        for(int x = 0; x < cnic.length(); x++)
        {
            if(int(cnic[x]) < 48 || int(cnic[x]) > 57)
            {
                flag1 = false;
            }
        }

        file.open("Customer.txt");

        while(!file.eof())
        {
            file >> _cnic;

            if(cnic == _cnic)
            {
                flag2 = false;
            }
        }

        file.close();
    }
    while(cnic.length() != 13 || flag1 == false || flag2 == false);

    cout << "\n Enter your name : ";
    getline(cin, name);

    do
    {
        cout << "\n *Phone number should be of size 11*";

        cout << "\n\n Enter your phone number : ";
        getline(cin, number);
    }
    while(number.length() != 11);

    cout << "\n Enter your house number : ";
    getline(cin, house);
    A->setHouse(house);

    cout << "\n Enter your locality : ";
    getline(cin, locality);
    A->setLocality(locality);

    cout << "\n Enter your city : ";
    getline(cin, city);
    A->setCity(city);

    do
    {
        password = "";

        cout << "\n *Password should be greater than 8 characters/digits*";

        cout << "\n\n Enter your password : ";

        while(1)
        {
            ch = getch();

            if (int(ch) == 13)
                break;

            password = password + ch;

            cout << "*";
        }
    }
    while(password.length() < 8);

    do
    {
        _password = "";

        cout << "\n\n Confirm your password : ";

        while(1)
        {
            ch = getch();

            if (int(ch) == 13)
                break;

            _password = _password + ch;

            cout << "*";
        }
    }
    while(password != _password);

    file.open("Customer.txt", ios :: app);

    file << cnic << " " << name << " " << number << " " << A->getHouse() << " " << A->getLocality() << " " << A->getCity() << " " << password << endl;

    file.close();

    cout << "\n\n Customer has been signed up successfully!!";
    cout << "\n\n Back to Home";
}

void Customers :: SignIn()
{
    bool flag;
    string _cnic, _username, _name, _number, _house, _locality, _city, _password;

    cout << "\n\t **************************** \n";
    cout << "\n\t SIGN IN AN EXISTING CUSTOMER \n";
    cout << "\n\t **************************** \n";

    cout << "\n Please enter all the relevant information. \n";

    do
    {
        flag = false;

        cout << "\n\n Enter CNIC : ";
        getline(cin, cnic);

        cout << "\n\n Enter password : ";
        getline(cin, password);

        file.open("Customer.txt");

        while(!file.eof())
        {
            file >> _cnic >> _name >> _number >> _house >> _locality >> _city >> _password;

            if(cnic == _cnic)
            {
                if(password == _password)
                {
                    flag = true;
                }
            }
        }

        file.close();
    }
    while(flag == false);

    cout << "\n\n Customer has been signed in successfully!!";
    cout << "\n\n Please proceed";
}

Customers :: ~Customers()
{
    delete A;
}
