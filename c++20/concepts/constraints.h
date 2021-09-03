/**
 * @author: Bilal El Uneis
 * @email:  bilaleluneis@gmail.com
 * @since   June 2021
 */

#ifndef LEARNINGCPP_CONSTRAINTS_H
#define LEARNINGCPP_CONSTRAINTS_H

#include <concepts>

template<typename T> concept Sizeable = requires(T t) {
    { t.size() } -> std::same_as<size_t>;
};


template<typename T, template<typename> class C>
concept Collection = requires(T t, C<T> c) {
    { c.put(t) } -> std::same_as<void>;
    { c.get()  } -> std::same_as<T>;
};

#endif //LEARNINGCPP_CONSTRAINTS_H
