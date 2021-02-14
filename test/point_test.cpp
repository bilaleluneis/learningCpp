/**
 * @author: Bilal El Uneis
 * @email: bilaleluneis@gmail.com
 * @since Aug 02 2020
 */

#include <boost/test/unit_test.hpp>
#include <array>
#include <point.h>

using namespace std;
using namespace boost;

struct pointFixture {
        explicit pointFixture() = default;
        ~pointFixture() = default;
};

BOOST_FIXTURE_TEST_SUITE(pointTests, pointFixture)

    BOOST_AUTO_TEST_CASE( pointInterface ) {
        Point point2D = Point2D<int>{};
        Point point3D = Point3D<int>{};
    }

BOOST_AUTO_TEST_SUITE_END()



