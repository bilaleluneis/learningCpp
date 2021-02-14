/**
 * @author: Bilal El Uneis
 * @email: bilaleluneis@gmail.com
 * @since July 25 2020
 */

#include <numbers.h>
#include <memory>

namespace runtime {

    template< typename T> T Number<T>::value() const {
        return this->internal_value;
    }


    Integer* Integer::operator+(const Number& other) const {
        return new Integer(this->value() + other.value());
    }

    Float* Float::operator+(const Number& other) const {
        return new Float(this->value() + other.value());
    }

}








