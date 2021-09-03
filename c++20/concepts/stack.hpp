/**
 * @author: Bilal El Uneis
 * @email:  bilaleluneis@gmail.com
 * @since   June 2021
 */

#ifndef LEARNINGCPP_STACK_H
#define LEARNINGCPP_STACK_H

#include <vector>

template <typename T>
struct Stack {

        size_t size() {return data.size();}
        T get();
        void put(T t){data.push_front(t);}

    private:
        std::vector<T> data;
};

template<typename T>
T Stack<T>::get() {
    auto value = data.front();
    data.pop_front();
    return value;
}

#endif //LEARNINGCPP_STACK_H
