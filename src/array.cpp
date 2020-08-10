/**
 * @author: Bilal El Uneis
 * @email: bilaleluneis@gmail.com
 * @since Aug 03 2020
 */

#include <cassert>

template <typename T, int size>
const T* Array<T, size>::begin() const {
    return &array[0];
}

template <typename T, int size>
const T* Array<T, size>::end() const {
    return &array[size];
}

template <typename T, int size>
T& Array<T, size>::operator[](int index) {
    assert(index < size);
    return array[index];
}



