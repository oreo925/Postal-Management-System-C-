/*
	Group Project 
	Wardah Fatima (f-301056)
    Tayabba Fatima Zafar (f-301012)
	Abdul Wahab	(f-301025)
*/

#include "AccountOfficer.h"

AccountOfficer :: AccountOfficer()
{

}

void AccountOfficer :: SignUp()
{
    bool flag1, flag2;
    string cnic, _cnic;

    cout << "\n\t ***************************** \n";
    cout << "\n\t SIGN UP A NEW ACCOUNT OFFICER \n";
    cout << "\n\t ***************************** \n";

    cout << "\n Please enter all the relevant information. \n";

    file.open("AccountOfficer.txt");
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

        file.open("AccountOfficer.txt");

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

    PostalWorkers :: SignUp();

    file.open("AccountOfficer.txt", ios :: app);

    file << cnic << " " << name << " " << number << " " << password << endl;

    file.close();

    cout << "\n\n Account officer has been signed up successfully!!";
    cout << "\n\n Back to Home";
}

void AccountOfficer :: SignIn()
{
    bool flag;
    string _cnic, _username, _name, _number, _password;

    cout << "\n\t *********************************** \n";
    cout << "\n\t SIGN IN AN EXISTING ACCOUNT OFFICER \n";
    cout << "\n\t *********************************** \n";

    cout << "\n Please enter all the relevant information. \n";

    do
    {
        flag = false;

        cout << "\n\n Enter CNIC : ";
        getline(cin, cnic);

        cout << "\n\n Enter password : ";
        getline(cin, password);

        file.open("AccountOfficer.txt");

        while(!file.eof())
        {
            file >> _cnic >> _name >> _number >> _password;

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

    cout << "\n\n Account officer has been signed in successfully!!";
    cout << "\n\n Please proceed";
}

AccountOfficer :: ~AccountOfficer()
{

}
