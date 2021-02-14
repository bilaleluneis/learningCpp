/**
* @author: Bilal El Uneis
* @email: bilaleluneis@gmail.com
* @since Jan 18 2021
*/

#include <boost/test/unit_test.hpp>
#include <virtual_inheritance.h>


struct virtualInheritanceFixture{};

BOOST_FIXTURE_TEST_SUITE(virtualInheritanceTests, virtualInheritanceFixture)

    BOOST_AUTO_TEST_CASE(aTest) {
        B b;
        C c;
        b.data[0] = 1;
        c.data[0] = 2;
        BOOST_CHECK(1 == 1);
    }

BOOST_AUTO_TEST_SUITE_END()
