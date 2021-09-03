/**
 * @author: Bilal El Uneis
 * @email:  bilaleluneis@gmail.com
 * @since   June 2021
 */

#ifndef BOOST_TEST_MAIN
#define BOOST_TEST_MAIN
#ifndef BOOST_TEST_MODULE
#define BOOST_TEST_MODULE Main

#include <boost/test/unit_test.hpp>
#include "stack.hpp"
#include "constraints.h"
#include "list.hpp"

template< template<class> typename C, typename T >
C<T> get_instance() requires Sizeable<C<T>> && Collection<T, C> {
    return std::move(C<T>{});
}

BOOST_AUTO_TEST_CASE(Concept) {
    auto s = get_instance<Stack, int>();
    BOOST_CHECK(s.size() == 0);
    auto l = get_instance<List, int>();
    l.put(1);
    BOOST_CHECK(l.size() == 1);
}


#endif
#endif

