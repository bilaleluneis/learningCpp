/**
 * @author: Bilal El Uneis
 * @email: bilaleluneis@gmail.com
 * @since Aug 03 2020
 */

#include <cassert>
#include <iostream>
#include <string>

template <typename T, int size, instace_id id>
const T* Array<T, size, id>::begin() const {
    return &array[0];
}

template <typename T, int size, instace_id id>
const T* Array<T, size, id>::end() const {
    return &array[size];
}

template <typename T, int size, instace_id id>
T& Array<T, size, id>::operator[](int index) {
    assert(index < size);
    return array[index];
}

template <typename T, int size, instace_id id>
Array<T, size, id>::~Array() {
    auto str_id = std::to_string(id);
    std::cout << "destroying Array instance with ID = "+ str_id + "\n";
}
