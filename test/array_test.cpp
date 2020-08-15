/**
 * @author: Bilal El Uneis
 * @email: bilaleluneis@gmail.com
 * @since Aug 02 2020
 */

#include <boost/test/unit_test.hpp>
#include <include/array.h>
#include <include/policy.h>

struct arrayFixture {
        explicit arrayFixture() = default;
        ~ arrayFixture() = default;
};

BOOST_FIXTURE_TEST_SUITE(arrayTests, arrayFixture)

    BOOST_AUTO_TEST_CASE( instanceCreation ) {
    }

    BOOST_AUTO_TEST_CASE( rangeLoop ) {
        Array array = Array<int, 10, 1>{};
        for (auto v : array)
            BOOST_CHECK(v == 0);
    }

    BOOST_AUTO_TEST_CASE( rangeLoopInterface) {
        Collection<int>* collection = new Array<int, 2, 2>{};
        auto& c = *collection;
        c[0] = 10;
        c[1] = 10;
        for (auto i : c)
            BOOST_CHECK(i == 10);
        delete collection;
    }

    BOOST_AUTO_TEST_CASE( container) {
        Array a1 = Array<int, 4, 3>{};
        Array a2 = Array<int, 5, 4>{};
        for(int i=0; i<5; i++)
            a2[i] = 10;
        Container<int> container{&a1, &a2};
        Collection<int>* collection = container.at(0);
        for(auto c : *collection)
            BOOST_CHECK(c == 0);
        collection = container.at(1);
        for(auto c : *collection)
            BOOST_CHECK(c == 10);
    }


BOOST_AUTO_TEST_SUITE_END()

