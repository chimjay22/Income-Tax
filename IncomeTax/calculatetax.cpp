#include <iostream>
#include "header.h"
#include <cassert>

using namespace std;




int calculateTax(int income){

    assert(income>=0);
    int basicRate =20;
    int HigherRate =40;
    int additionalRate =45;
    int taxrate;
    int added;
    int add;

    if (income >= 0 && income<=37500){
        taxrate = basicRate;
        added =0;
        add =0;
    }

    else if (income >= 37501 && income <=150000){

        added = 37500 - (37500*basicRate/100);
        add= 0;
        income = income - 37500;
        taxrate = HigherRate;
    }

    else {
        added = 37500 - (37500*basicRate/100);
        add = 112500 - (112500*HigherRate/100);
        income = income - 150000;
        taxrate = additionalRate;
    }

    double formula = income - (income*taxrate/100) + added + add;

    double totaltax = formula;
    return totaltax;

}
