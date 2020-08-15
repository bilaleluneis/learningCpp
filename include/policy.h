/**
 * @author: Bilal El Uneis
 * @email: bilaleluneis@gmail.com
 * @since Aug 12 2020
 */

#ifndef LEARNINGCPP_POLICY_H
#define LEARNINGCPP_POLICY_H

#include <vector>

template <typename T>
struct Iterable {
        virtual const T* begin() const = 0;
        virtual const T* end() const = 0;
};

template <typename IndxTyp, typename ReturnTyp>
struct Indexable {
        virtual ReturnTyp& operator[](IndxTyp index) = 0;
};

template <typename T, typename IndxType = int>
struct Collection: Iterable<T>, Indexable<IndxType, T>{
        virtual ~Collection() = default;
};

//TODO: move to retuntype.h
template <typename T>
using Container = std::vector<Collection<T>*>;

#endif //LEARNINGCPP_POLICY_H
