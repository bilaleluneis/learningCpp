/**
 * @author: Bilal El Uneis
 * @email:  bilaleluneis@gmail.com
 * @since   Feb 2021
 */

#ifndef LEARNINGCPP_INDEXABLE_H
#define LEARNINGCPP_INDEXABLE_H

#include <utility>
#include <functional>
#include <optional>

template <typename T> using optional = std::optional<T>;
template <typename T> using ref = std::reference_wrapper<T>;
template <typename A, typename B> using tuple = std::pair<A, B>;

template <typename IndxTyp, typename ReturnTyp>
struct Indexable {
        virtual ReturnTyp& operator[] (IndxTyp index) = 0;
        virtual ReturnTyp& operator[] (IndxTyp index) const = 0;
};

#endif //LEARNINGCPP_INDEXABLE_H
