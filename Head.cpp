/*
	Group Project 
	Wardah Fatima (f-301056)
    Tayabba Fatima Zafar (f-301012)
	Abdul Wahab	(f-301025)
*/

#include "Head.h"

Head :: Head()
{

}

void Head :: SignIn()
{
    bool flag;
    string _cnic, _username, _name, _number, _password;

    cout << "\n\t ************************ \n";
    cout << "\n\t SIGN IN AN EXISTING HEAD \n";
    cout << "\n\t ************************ \n";

    cout << "\n Please enter all the relevant information. \n";

    do
    {
        flag = false;

        cout << "\n\n Enter CNIC : ";
        getline(cin, cnic);

        cout << "\n\n Enter password : ";
        getline(cin, password);

        file.open("Clerk.txt");

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

    cout << "\n\n Head has been signed in successfully!!";
    cout << "\n\n Please proceed";
}

Head :: ~Head()
{

}
