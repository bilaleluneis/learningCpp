/**
 * @author: Bilal El Uneis
 * @email: bilaleluneis@gmail.com
 * @since Jan 12 2021
 */

#include <constructor.h>

Constructor::Constructor() {
    calledC.push_back(defaultC);
}

Constructor::Constructor(const Constructor &other) {
    for(const auto& i : other.calledC)
        calledC.push_back(i);
    calledC.push_back(copyC);
}
