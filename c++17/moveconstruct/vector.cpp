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

// protected constructor
Vector::Vector(std::size_t size_) : Vector() {
    size = size_; // NOLINT(cppcoreguidelines-prefer-member-initializer)
    v = new int[size]; // NOLINT(cppcoreguidelines-prefer-member-initializer)
}

Vector::Vector(Vector&& anotherVector) noexcept: size{anotherVector.size}, v{anotherVector.v} {
    anotherVector.size = 0;
    anotherVector.v = nullptr;
}

Vector::~Vector() {
    delete[] v;
    v = nullptr;
}

int& Vector::operator[](std::size_t index) const {
    assert(index < size);
    return const_cast<Vector*>(this)->v[index];
}

Vector Vector::operator+ (const Vector& anotherVector) const {
    assert(this->size == anotherVector.size);
    Vector result(size);
    for(std::size_t index = 0; index < this->size; index++)
        result.v[index] = this->v[index] + anotherVector.v[index];
    return result;
}

Vector& Vector::operator= (Vector&& anotherVector) noexcept {
    if(this != &anotherVector){
        size = anotherVector.size;
        v = anotherVector.v;
        anotherVector.v = nullptr;
    }
    return *this;
}

bool Vector::isEmpty() const {
    return (v == nullptr && size == 0);
}




