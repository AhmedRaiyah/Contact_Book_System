#include "PhoneNumber.h"
#include <iostream>
using namespace std;

PhoneNumber::PhoneNumber()
{
    //ctor
}

void PhoneNumber::setNumber()
{
    cout << "Number: ";
    cin >> number;
   /* for(int i = 0; i < counter; i++)
    {
        if(number == cntcts[i].getNumber)
        {
            cout << "Number already exists.";
            cin >> number;
            break;
        }
    }*/
}

string PhoneNumber::getNumber()
{
    return number;
}

void PhoneNumber::setType()
{
    cout << "Type (h-home, m-mobile, w-work): ";
    cin >> typeOf;
    switch(typeOf)
    {
    case 'h':
        {
            type = "Home";
            break;
        }
    case 'm':
        {
            type = "Mobile";
            break;
        }
    case 'w':
        {
            type = "Work";
            break;
        }
    default:
        {
            cout << "Invalid Input.\n";
        }
    }
}

string PhoneNumber::getType()
{
    return type;
}

PhoneNumber::~PhoneNumber()
{
    //dtor
}
