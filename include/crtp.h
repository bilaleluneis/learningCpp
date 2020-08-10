/**
 * @author: Bilal El Uneis
 * @email: bilaleluneis@gmail.com
 * @since July 25 2020
 */

/**
 * Simple Eample of curiously recurring template pattern (CRTP)
 * https://en.wikipedia.org/wiki/Curiously_recurring_template_pattern
 */

#ifndef LEARNINGCPP_CRTP_H
#define LEARNINGCPP_CRTP_H

#include <memory>

using namespace std;

/*
 * this is an interface and not an abstract class because
 *methods are declared as pure vitrual
 */
struct Shape {
        virtual ~Shape() = default;
        virtual unique_ptr<Shape> clone() = 0; // pure virtual method (no default impl)
};

template <typename T>
struct ShapeCRTP : Shape {
        ~ShapeCRTP() override = default;
        unique_ptr<Shape> clone() final;
};

struct Square : ShapeCRTP<Square> {
        float circum = 3.14;
};

struct Line : ShapeCRTP<Line> {
        int x1 = 0;
        int y1 = 0;
        int x2 = 0;
        int y2 = 0;
};

#endif //LEARNINGCPP_CRTP_H
