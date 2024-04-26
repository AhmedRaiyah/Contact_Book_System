#include "Date.h"
#include <iostream>
#include <time.h>
#include <iomanip>
using namespace std;

Date::Date()
{
    //ctor
}
void Date::dates()
{
    cout << setw(27) << dt;
}

Date::~Date()
{
    //dtor
}
