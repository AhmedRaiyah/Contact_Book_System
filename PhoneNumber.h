#ifndef PHONENUMBER_H
#define PHONENUMBER_H
#include <iostream>
using namespace std;

class PhoneNumber
{
private:
    char typeOf;
    string number, type;
public:
    PhoneNumber();
    void setNumber();
    string getNumber();
    void setType();
    string getType();
    ~PhoneNumber();
};

#endif // PHONENUMBER_H
