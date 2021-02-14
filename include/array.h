/**
 * @author: Bilal El Uneis
 * @email: bilaleluneis@gmail.com
 * @since Aug 02 2020
 */

#ifndef LEARNINGCPP_ARRAY_H
#define LEARNINGCPP_ARRAY_H

#include <type_traits.h>
#include <returntype.h>
#include <policy.h>
#include <returntype.h>
#include <iosfwd>

template <typename T, int size, instace_id id>
class Array final : public Collection<T> {

    public:
        ~ Array();
        Array() = default;

        // allow using range based loops
        const T* begin() const override;
        const T* end() const override ;

        // overload [] operator
        T& operator[](int index) override;

    private:
        static_assert(is_valid_size<size>::value, "Array size must be > 0");
        T array[size];

};

//#include <src/array.cpp>

#endif //LEARNINGCPP_ARRAY_H
