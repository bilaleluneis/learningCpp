/**
 * @author: Bilal El Uneis
 * @email: bilaleluneis@gmail.com
 * @since Jan 12 2021
 */

#include <boost/test/unit_test.hpp>
#include <constructor.h>
#include <algorithm>

// helper functions

Constructor get_instance(){
    Constructor temp{};
    return temp;
}
struct virtualInheritanceFixture{};

BOOST_FIXTURE_TEST_SUITE(constructorTests, virtualInheritanceFixture)

    BOOST_AUTO_TEST_CASE(defaultConstructorTest) {
        Constructor c{};
        BOOST_CHECK(std::find(c.calledC.begin(), c.calledC.end(), defaultC) != c.calledC.end());
    }

    BOOST_AUTO_TEST_CASE(copyConstructorTest) {
       auto t =  get_instance();
    }

BOOST_AUTO_TEST_SUITE_END()