/*
	Group Project 
	Wardah Fatima (f-301056)
    Tayabba Fatima Zafar (f-301012)
	Abdul Wahab	(f-301025)
*/

#include "PostalWorkers.h"

PostalWorkers :: PostalWorkers()
{
    cnic = "";
    name = "";
    password = "";
    _password = "";
    number = "";
}

void PostalWorkers :: SignUp()
{   
    char ch;

    cout << "\n Enter your name : ";
    getline(cin, name);

    do
    {
        cout << "\n *Phone number should be of size 11*";

        cout << "\n\n Enter your phone number : ";
        getline(cin, number);
    }
    while(number.length() != 11);

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
}

PostalWorkers :: ~PostalWorkers()
{

}
