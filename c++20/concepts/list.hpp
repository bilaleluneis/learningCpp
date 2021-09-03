/**
 * @author: Bilal El Uneis
 * @email:  bilaleluneis@gmail.com
 * @since   June 2021
 */

#ifndef LEARNINGCPP_LIST_H
#define LEARNINGCPP_LIST_H

#include <vector>

template <typename T>
struct List {

        size_t size() {return data.size();}
        T get();
        void put(T t){data.push_back(t);}

    private:
        std::vector<T> data;
};

template<typename T>
T List<T>::get() {
    auto value = data.back();
    data.pop_back();
    return value;
}

#endif //LEARNINGCPP_LIST_H
