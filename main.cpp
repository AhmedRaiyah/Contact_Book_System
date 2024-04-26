#include <iostream>
#include "ContactBook.h"
using namespace std;

int main()
{
    ContactBook cntcts;
    char option;
    do{
        cout << "Main Menu\n"
             << "---------\n"
             << "(1)Add Contact.\n"
             << "(2)Display All Contacts.\n"
             << "(3)Search for a Contact.\n"
             << "(4)Edit Contact.\n"
             << "(5)Delete a Contact.\n"
             << "(0)Exit Program.\n"
             << "Choice: ";
        cin >> option;
        system("cls");
        if(option == '0')
        {
            break;
        }
        switch(option)
        {
        case '1':
            {
                cntcts.addContact();
                break;
            }
        case '2':
            {
                cntcts.displayContact();
                break;
            }
        case '3':
            {
                cntcts.searchContact();
                break;
            }
        case '4':
            {
                cntcts.editContact();
                break;
            }
        case '5':
            {
                cntcts.deleteContact();
                break;
            }
        default:
            {
                cout << "Invalid Input.\n";
            }
        }
    cout << "\nPress 'h' to return to Main Menu.\n"
         << "Press 'e' to Exit Program.\n"
         << "Choice: ";
    cin >> option;
    system("cls");
    }while(option == 'h');
    cout << "\n\nProgram terminated.\n\n";
    return 0;
}
