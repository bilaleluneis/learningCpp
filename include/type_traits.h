/**
 * @author: Bilal El Uneis
 * @email: bilaleluneis@gmail.com
 * @since Aug 02 2020
 */

#ifndef LEARNINGCPP_TYPE_TRAITS_H
#define LEARNINGCPP_TYPE_TRAITS_H

// by default any Type is not valid point coordinate
template <typename T>
struct is_valid_point_coord {
        static const bool value = false;
};

// template specializations for what Types are valid point coordinates
template<>
struct is_valid_point_coord<int> {
        static const bool value = true;
};

template<>
struct is_valid_point_coord<float> {
        static const bool value = true;
};

// array size type trait
template<int size>
struct is_valid_size {
        static const bool value = size > 0;
};

#endif //LEARNINGCPP_TYPE_TRAITS_H
