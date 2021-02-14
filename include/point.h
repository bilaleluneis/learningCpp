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

#ifndef LEARNINGCPP_POINT_H
#define LEARNINGCPP_POINT_H

#include <type_traits.h>

using namespace std;

template <typename T, int Dimentions>
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
template <typename T>
class Point2D final : public Point<T, 2>{};

template <typename T>
class Point3D final: public Point<T, 3> {};


#endif //LEARNINGCPP_POINT_H
