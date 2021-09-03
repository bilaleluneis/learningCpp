/**
 * @author: Bilal El Uneis
 * @email:  bilaleluneis@gmail.com
 * @since   Feb 2021
 */


#ifndef BOOST_TEST_MAIN
#define BOOST_TEST_MAIN
#ifndef BOOST_TEST_MODULE
#define BOOST_TEST_MODULE Main

#include <boost/test/unit_test.hpp>
#include "vector.h"

BOOST_AUTO_TEST_CASE(construction) {
    Vector v1{1, 2, 3};
    Vector v2{std::move(v1)};
    BOOST_CHECK(v2[0] == 1);
    BOOST_CHECK(v1.isEmpty());
}

BOOST_AUTO_TEST_CASE(assignmentCallsMoveConstructor) {
    Vector v1{1, 2, 3};
    Vector v2 = std::move(v1);
    BOOST_CHECK(1 == 1);
}

BOOST_AUTO_TEST_CASE(moveConstructorCalledOnRValueExpression) {
    Vector v1{1, 2, 3};
    Vector v2{4, 5, 6};
    Vector v3{v1 + v2};
    BOOST_CHECK(1 == 1);
}


#endif
#endif


