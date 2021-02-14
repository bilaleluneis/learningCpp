/**
 * @author: Bilal El Uneis
 * @email:  bilaleluneis@gmail.com
 * @since   Feb 2021
 */

#ifndef LEARNINGCPP_ITERABLE_H
#define LEARNINGCPP_ITERABLE_H

template <typename T>
struct Iterable {
        virtual T* begin() = 0;
        virtual T* end() = 0;
};

#endif //LEARNINGCPP_ITERABLE_H
