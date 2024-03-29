/**
* @author: Bilal El Uneis
* @email:  bilaleluneis@gmail.com
* @since   Feb 2021
*/

#ifndef LEARNINGCPP_VECTOR_H
#define LEARNINGCPP_VECTOR_H

#include <cstddef>
#include <initializer_list>

class Vector final {

    public:
        Vector(std::initializer_list<int>);
        Vector(Vector&&) noexcept;
        Vector(const Vector&) = delete;
        Vector(Vector&) = delete;
        ~ Vector();
        int& operator[] (std::size_t) const;
        Vector operator+ (const Vector&) const;
        Vector& operator= (Vector&&) noexcept;
        Vector& operator= (const Vector&) = delete;
        [[nodiscard]] bool isEmpty() const;

    protected:
        explicit Vector(std::size_t size_);
        Vector(): size{0} {delete[] v;};

    private:
        std::size_t size = 0;
        int* v = nullptr;

};

#endif //LEARNINGCPP_VECTOR_H
