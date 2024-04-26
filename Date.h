#ifndef DATE_H
#define DATE_H
#include <iostream>
#include <time.h>
using namespace std;

class Date
{
private:
    time_t timing = time(0);
    char *dt = ctime(&timing);
public:
    Date();
    void dates(); // displays date and time
    ~Date();
};

#endif // DATE_H
