#define BOOST_TEST_MODULE CalculateTax
#include <boost/test/included/unit_test.hpp>
#include "header.h"

BOOST_AUTO_TEST_CASE( calculateTest )
{
    int tax;
    tax= calculateTax(30000);
    BOOST_CHECK( tax >= 0 );
}

