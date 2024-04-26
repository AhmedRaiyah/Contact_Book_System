#ifndef CONTACT_H
#define CONTACT_H
#include <iostream>
#include "PhoneNumber.h"
#include "Date.h"
using namespace std;

class Contact
{
private:
    int id, gen;
    string name, gender, city, email;
    Date addedDate;
    PhoneNumber phone;
public:
    Contact();
    void setName(); // set name
    string getName(); // return name
    void setNumber(); // set number
    string getNumber(); // return number
    void setType(); // set type
    string getType(); // return type
    void setGender(); // set gender
    string getGender(); // return gender
    void setCity(); // set city
    string getCity(); // return city
    void setEmail(); // set e-mail
    string getEmail(); // return e-mail
    void setId(); // set Id
    int getId(); // return Id
    void setAll(); // set All
    void getAll(); // return All
    ~Contact();
};

#endif // CONTACT_H
