/**
 * @author: Bilal El Uneis
 * @email:  bilaleluneis@gmail.com
 * @since   Feb 2021
 */

#ifndef LEARNINGCPP_ARRAY_HPP
#define LEARNINGCPP_ARRAY_HPP

#include <datastructure/indexable.h>
#include <datastructure/iterable.h>

template <typename T, size_t size>
class Array final : public Indexable<size_t, T>, public Iterable<T> {

    public:
        // nothing to de-allocate, this->array[] member is fixed size
        ~ Array() = default;

        // disable copy and move construction
        Array(const Array&) = delete;
        Array(Array&&) = delete;

        // default constructor init to zero values
        Array();

        // implement Iterable<T> interface
        T* begin() override;
        T* end() override ;

        // Implement Indexable<IndexTyp, ReturnType> interface
        T& operator[] (size_t index) override;
        T& operator[] (size_t index) const override;

    private:
        static_assert(size > 0, "Array size must be > 0"); // compile time assertion
        T array[size];
        inline T& get(size_t);

};

template <typename T, size_t size>
T* Array<T, size>::begin() {
    return &array[0];
}

template <typename T, size_t size>
T* Array<T, size>::end() {
    return &array[size];
}

template <typename T, size_t size>
T& Array<T, size>::operator[] (size_t index) {
    return get(index);
}

template<typename T, size_t size>
T& Array<T, size>::operator[] (size_t index) const {
    return const_cast<Array*>(this)->get(index);
}

template<typename T, size_t size>
Array<T, size>::Array() {
    for(auto& item : array)
        item = T{};
}

template<typename T, size_t size>
inline T& Array<T, size>::get(size_t index) {
    assert(index < size && index >= 0);
    return array[index];
}


#endif //LEARNINGCPP_ARRAY_HPP
