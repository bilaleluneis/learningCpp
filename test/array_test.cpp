/**
 * @author: Bilal El Uneis
 * @email: bilaleluneis@gmail.com
 * @since Aug 02 2020
 */

#include <boost/test/unit_test.hpp>
#include <include/array.h>

using namespace std;
using namespace boost;

struct arrayFixture {
        explicit arrayFixture() = default;
        ~ arrayFixture() = default;
};

BOOST_FIXTURE_TEST_SUITE(arrayTests, arrayFixture)

    BOOST_AUTO_TEST_CASE( instanceCreation ) {
        auto array = Array<int, 2>{};
        array[0] = 1;
        BOOST_CHECK(array[0] == 1);
    }

    BOOST_AUTO_TEST_CASE( rangeLoop ) {
        auto array = Array<int, 10>{};
        for (auto v : array)
            BOOST_CHECK(v == 0);
    }

BOOST_AUTO_TEST_SUITE_END()

