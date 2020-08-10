#include <boost/test/unit_test.hpp>
#include <vector>
#include <include/crtp.h>

using namespace std;
using namespace boost;

struct crtpFixture {
        explicit crtpFixture() {
            v.push_back(make_unique<Square>());
            v.push_back(make_unique<Line>());
        }
        ~crtpFixture() = default;
        vector<unique_ptr<Shape>> v;
};

BOOST_FIXTURE_TEST_SUITE(crtpTests, crtpFixture)

BOOST_AUTO_TEST_CASE( crtpVerifyTest ) {
    for (const auto& s : v){
        unique_ptr<Shape> shape = s->clone();
    }
}

BOOST_AUTO_TEST_SUITE_END()

