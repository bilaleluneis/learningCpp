/**
 * @author: Bilal El Uneis
 * @email:  bilaleluneis@gmail.com
 * @since   Feb 2021
 */

#include <cassert>
#include "vector.h"

Vector::Vector(std::initializer_list<int> values) : Vector(values.size()) {
    std::size_t index = 0;
    for (const auto& value: values) {
        v[index] = value;
        index++;
    }
}

Vector::Vector(std::size_t size_) : Vector() {
    size = size_; // NOLINT(cppcoreguidelines-prefer-member-initializer)
    v = new int[size]; // NOLINT(cppcoreguidelines-prefer-member-initializer)
}

Vector::Vector(const Vector& anotherVector): Vector(anotherVector.size) {
   for(std::size_t i = 0; i < size; i++ )
       v[i] = anotherVector[i];
}

Vector::~Vector() {
    delete[] v;
    v = nullptr;
}

int& Vector::operator[](std::size_t index) const {
    assert(index < size);
    return const_cast<Vector*>(this)->v[index];
}

Vector& Vector::operator= (const Vector& anotherVector) {
    if(this != &anotherVector){
        size = anotherVector.size;
        delete[] v;
        v = new int[size];
        for (std::size_t i = 0; i < size; i++)
            v[i] = anotherVector.v[i];
    }
    return *this;
}


