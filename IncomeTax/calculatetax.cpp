#include <iostream>
#include "header.h"

using namespace std;




int calculateTax(int income){


    double taxrate;
    taxrate = 20;
    double formula = income - (income*(taxrate/100));

    double totaltax = formula;
    return totaltax;

}
