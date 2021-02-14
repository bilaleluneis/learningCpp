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
#include <datastructure/array/array.hpp>

BOOST_AUTO_TEST_CASE( testZeroInit ) {
    Array<int, 10> ar;
    for(size_t index = 0; index < 10; index ++)
        BOOST_CHECK(ar[index] == 0);
}

BOOST_AUTO_TEST_CASE( testConst) {
    const Array<int, 10> ar;
    const auto v = ar[0];
    BOOST_CHECK(v == 0);
}

BOOST_AUTO_TEST_CASE( testRangeLoop ) {
    Array<int, 10> ar;

    for(auto& item : ar)
        item = 1;

    for(const auto& item : ar)
        BOOST_CHECK(item == 1);
}

#endif
#endif

