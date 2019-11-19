#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE CalculateTax
#include <boost/test/included/unit_test.hpp>
#include "header.h"

BOOST_AUTO_TEST_CASE( calculateTest1 )
{
    int remainingIncome;
    remainingIncome= calculateTax(10000);
    BOOST_CHECK_EQUAL( remainingIncome , 8000 );
}


BOOST_AUTO_TEST_CASE( calculateTest2 )
{
    int remainingIncome;
    remainingIncome= calculateTax(50000);
    BOOST_CHECK_EQUAL( remainingIncome , 37500 );
}

BOOST_AUTO_TEST_CASE( calculateTest3 )
{
    int remainingIncome;
    remainingIncome= calculateTax(200000);
    BOOST_CHECK_EQUAL( remainingIncome , 125000 );
}
