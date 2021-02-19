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

BOOST_AUTO_TEST_CASE( initialConstruction ) {
    Vector v{1, 2, 3, 4};
    BOOST_CHECK(v[0] == 1);
}

BOOST_AUTO_TEST_CASE( copyAssignment ) {
    Vector v1{1, 2, 3, 4};
    Vector v2{5, 6, 7, 8, 9, 10, 11};
    v2 = v1;
    BOOST_CHECK(v2[0] == 1);
}

BOOST_AUTO_TEST_CASE( copyConstruction ) {
    Vector v1{1, 2, 3, 4};
    Vector v2 = v1; // NOLINT(performance-unnecessary-copy-initialization)
    BOOST_CHECK(v2[0] == 1);
}



#endif
#endif