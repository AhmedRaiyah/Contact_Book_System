#include "Contact.h"
#include <iostream>
#include <iomanip>
#include "PhoneNumber.h"
#include "Date.h"
using namespace std;

Contact::Contact()
{
    //ctor
}

void Contact::setName()
{
  cout << "Name: ";
  cin.get();
  getline(cin,name);
}

string Contact::getName()
 {
     return name;
 }

void Contact::setNumber()
{
    phone.setNumber();
}

string Contact::getNumber()
{
    return phone.getNumber();
}

void Contact::setType()
{
    phone.setType();
}

string Contact::getType()
{
    return phone.getType();
}

void Contact::setGender()
{
    cout << "Gender (0-Male, 1-Female): ";
    cin >> gen;
    switch(gen)
    {
    case 0:
        {
            gender = "Male";
            break;
        }
    case 1:
        {
            gender = "Female";
            break;
        }
    default:
        {
            cout << "Invalid Input.\n";
        }
    }
}

string Contact::getGender()
{
    return gender;
}

void Contact::setCity()
{
    cout << "City: ";
    cin >> city;
}

string Contact::getCity()
{
    return city;
}

void Contact::setEmail()
{
    cout << "E-mail: ";
    cin >> email;
}

string Contact::getEmail()
{
    return email;
}

void Contact::setId()
{
    cout << "I.D: ";
    cin >> id;
}

int Contact::getId()
{
    return id;
}

void Contact::setAll()
{
    setName();
    setNumber();
    setType();
    setId();
    setCity();
    setEmail();
    setGender();
}
void Contact::getAll()
{
    cout << setiosflags(ios::left) << setfill(' ')
         << setw(20)  << endl << getName()
         << "" << setw(14) << getNumber()
         << "" << setw(8) << getType()
         << "" << setw(8) << getId()
         << "" << setw(15) << getCity()
         << "" << setw(20) << getEmail()
         << "" << setw(9) << getGender();
    addedDate.dates();
    cout << endl << setiosflags(ios::left) << setfill('-') << setw(20)
         << "" << setw(14) << "" << setw(8) << "" << setw(8) << ""
         << setw(15) << "" << setw(20) << "" << setw(9) << "" << setw(27) << "";
}

Contact::~Contact()
{
    //dtor
}
