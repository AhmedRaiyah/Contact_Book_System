#include "ContactBook.h"
#include <iostream>
#include <string>
#include <iomanip>
#include "Contact.h"
using namespace std;

ContactBook::ContactBook()
{
    cntcts = new Contact[100];
}

void ContactBook::addContact()
{
    do{
        cout << "\nContact #" << counter+1 << ":\n";
        cntcts[counter++].setAll();
        for(int i = 0; i < counter; i++)
        {
            for(int j = i+1 ; j < counter; j++)
            {
                if(cntcts[i].getNumber() == cntcts[j].getNumber())
                {
                    cout << "Number already exists\nRe-enter ";
                    cntcts[j].setNumber();
                }
                if(cntcts[i].getName() == cntcts[j].getName())
                {
                    cout << "Name already exists\nRe-enter ";
                    cntcts[j].setName();
                }
                else
                    break;
            }
        }
        cout << "\nDo you want to add another contact?(y/n): ";
        cin >> choice;
        system("cls");
    }while(choice == 'y');
}

void ContactBook::displayContact()
{
    cout << "\t\t\t    ====================\n";
    cout << "\t\t\t\tContact Book\n";
    cout << "\t\t\t    ====================\n";
    cout << "\nNo. of contacts: " << counter;
    cout << "\n--------------------\n\n";
    cout << setiosflags(ios::left) << setfill(' ') << setw(20) << "Name" << setw(14) << "Number" << setw(8)
         << "Type" << setw(8) << "I.D" << setw(15) << "City" << setw(20) << "E-mail" << setw(9) << "Gender" << setw(27) << "Date";
    cout << endl << setiosflags(ios::left) << setfill('-') << setw(20) << "" << setw(14) << "" << setw(8) << ""
         << setw(8) << "" << setw(15) << "" << setw(20) << "" << setw(9) << "" << setw(27) << "";
    for(int i = 0; i < counter; i++)
    {
        cntcts[i].getAll();
    }
}

void ContactBook::searchContact()
{
    int searchIndex = -1;
    string searchString;
    cout << "\nName/Number: ";
    cin.get();
    getline(cin,searchString);
    for(int i = 0; i < counter; i++)
    {
        if(searchString == cntcts[i].getName().substr(0, cntcts[i].getName().find(' ')) || searchString == cntcts[i].getNumber() || searchString == cntcts[i].getName())
        {
            searchIndex = i;
            break;
        }
    }
    for(int i = 0; i < counter; i++)
    {
        for(int j = i+1; j < counter; j++)
        {
            if(searchString == cntcts[j].getName().substr(0, cntcts[i].getName().find(' ')))
            {
                if(cntcts[i].getName() == cntcts[j].getName())
                {
                    break;
                }
                 cntcts[j].getAll();
            }
        }
    }
    if(searchIndex == -1)
    {
        cout << searchString << " was not found.\n";
    }
    else
    {
        cntcts[searchIndex].getAll();
    }
}

void ContactBook::editContact()
{
    char ch;
    int editIndex = -1;
    string editString;
    do{
    cout << "Full Name/Number: ";
    cin.get();
    getline(cin,editString);
    for(int i = 0; i < counter; i++)
    {
        if(editString == cntcts[i].getName().substr(0, cntcts[i].getName().find(' ')) || editString == cntcts[i].getNumber() || editString == cntcts[i].getName())
        {
            editIndex = i;
            break;
        }
    }
    int opt;
    if(editIndex == -1)
    {
        cout << editString << " was not found.\n";
    }
    else
    {
        cout << "(1)Edit Name.\n"
             << "(2)Edit Number.\n"
             << "(3)Edit Type.\n"
             << "(4)Edit I.D.\n"
             << "(5)Edit City.\n"
             << "(6)Edit E-mail.\n"
             << "(7)Edit Gender.\n"
             << "(0)Edit All.\n"
             << "Choice: ";
        cin >> opt;
        switch(opt)
        {
        case 1:
            {
                cntcts[editIndex].setName();
                break;
            }
        case 2:
            {
                cntcts[editIndex].setNumber();
                break;
            }
        case 3:
            {
                cntcts[editIndex].setType();
                break;
            }
        case 4:
            {
                cntcts[editIndex].setId();
                break;
            }
        case 5:
            {
                cntcts[editIndex].setCity();
                break;
            }
        case 6:
            {
                cntcts[editIndex].setEmail();
                break;
            }
        case 7:
            {
                cntcts[editIndex].setGender();
                break;
            }
        case 0:
            {
                cntcts[editIndex].setAll();
                break;
            }
        default:
            {
                cout << "Invalid Entry.\n";
            }
        }
        }
        cout << "Another edit?(y/n): ";
        cin >> ch;
        system("cls");
    }while(ch == 'y');

}

void ContactBook::deleteContact()
{
    char ch;
    int delIndex = -1;
    string delString;
    do{
    cout << "Full Name/Number: ";
    cin.get();
    getline(cin,delString);
    for(int i = 0; i < counter; i++)
    {
        if(delString == cntcts[i].getName().substr(0, cntcts[i].getName().find(' ')) || delString == cntcts[i].getNumber() || delString == cntcts[i].getName())
        {
            delIndex = i;
            break;
        }
    }
    if(delIndex == -1)
    {
        cout << delString << " was not found.\n";
    }
    else
    {
        if(delIndex == 0)
        {
            cntcts[0] = cntcts[counter-1];
            counter--;
        }
        else
        {
            cntcts[delIndex] = cntcts[counter-1];
            counter--;
        }
        cout << "Contact deleted successfully.\n";
    }
    cout << "Delete Another?(y/n): ";
    cin >> ch;
    }while(ch == 'y');
}


ContactBook::~ContactBook()
{
    delete [] cntcts;
}
