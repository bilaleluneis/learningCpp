/**
 * @author: Bilal El Uneis
 * @email: bilaleluneis@gmail.com
 * @since July 25 2020
 */

#include <include/crtp.h>

// forward declaration of specialized template
template struct ShapeCRTP<Square>;
template struct ShapeCRTP<Line>;

template<typename T>
unique_ptr<Shape> ShapeCRTP<T>::clone() {
    auto shape = make_unique<T>();
    return shape;
}




