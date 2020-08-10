/**
 * @author: Bilal El Uneis
 * @email: bilaleluneis@gmail.com
 * @since Aug 02 2020
 */

#ifndef LEARNINGCPP_ARRAY_H
#define LEARNINGCPP_ARRAY_H

#include <include/type_traits.h>
#include <include/returntype.h>

template <typename T, int size>
class Array final {

    public:
        ~ Array() = default;
        Array() = default;

        // allow using range based loops
        const T* begin() const;
        const T* end() const;

        // overload [] operator
        T& operator[](int index);

    private:
        static_assert(is_valid_size<size>::value, "Array size must be > 0");
        T array[size];

};

#include <src/array.cpp>

#endif //LEARNINGCPP_ARRAY_H
