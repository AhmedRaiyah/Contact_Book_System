#ifndef CONTACTBOOK_H
#define CONTACTBOOK_H
#include <iostream>
#include "Contact.h"
using namespace std;

class ContactBook
{
private:
    int counter = 0;
    char choice;
    Contact *cntcts;
public:
    ContactBook();
    void addContact();
    void displayContact();
    void editContact();
    void searchContact();
    void deleteContact();
    ~ContactBook();
};

#endif // CONTACTBOOK_H
