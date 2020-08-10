/**
 * @author: Bilal El Uneis
 * @email: bilaleluneis@gmail.com
 * @since July 28 2020
 */

/**
 * This example will show case:
 * Operator Overloading outside the class
 * the use of decltype() for return type
 */

#ifndef LEARNINGCPP_DECLTYPE_H
#define LEARNINGCPP_DECLTYPE_H

#include <array>
#include <vector>
#include <include/type_traits.h>

using namespace std;

template <typename T, int Dimentions = 2>
class Point {

    public:
        virtual ~Point() = default;

    protected:
        Point() = default;
        int size {Dimentions};
        T points[Dimentions];

    private:
        // would be executed during compile time
        static_assert(is_valid_point_coord<T>::value, "Point Type can only be int or float");

};

/* final classes .. cannot be inherited */
class Point2D final : public Point<float> {

    public:
        ~ Point2D() override = default;


};

class Point3D final: public Point<float, 3> {

    public:
        ~ Point3D() override = default;

};


#endif //LEARNINGCPP_DECLTYPE_H
