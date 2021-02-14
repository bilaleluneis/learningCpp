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
#include "pair.hpp"

BOOST_AUTO_TEST_CASE( pairTest ) {
    auto p = pair{1, 2};
    BOOST_CHECK(p.a == 1 && p.b == 2);
}

#endif
#endif

