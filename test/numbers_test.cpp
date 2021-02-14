#include <boost/test/unit_test.hpp>
#include <memory>
#include <numbers.h>

using namespace std;
using namespace boost;

struct numbersFixture {
        explicit numbersFixture() = default;

        ~numbersFixture() = default;
};

BOOST_FIXTURE_TEST_SUITE(numberTests, numbersFixture)

    BOOST_AUTO_TEST_CASE(addIntsTest) {
        auto num1 = make_unique<runtime::Integer>(runtime::Integer(1));
        auto num2 = make_unique<runtime::Integer>(runtime::Integer(2));
        auto result = unique_ptr<runtime::Number<int>>(*num1 + *num2);
        BOOST_CHECK(result->value() == 3);
    }

    BOOST_AUTO_TEST_CASE(testingCompileTime) {

    }

BOOST_AUTO_TEST_SUITE_END()

