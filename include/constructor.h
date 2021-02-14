/**
 * @author: Bilal El Uneis
 * @email: bilaleluneis@gmail.com
 * @since Jan 12 2021
 */

#ifndef LEARNINGCPP_CONSTRUCTOR_H
#define LEARNINGCPP_CONSTRUCTOR_H

#include <vector>

enum ConstrctType {defaultC, copyC, moveC};

struct Constructor {
        Constructor(); // defaultC
        Constructor(const Constructor& other); //copy constructor
        std::vector<ConstrctType> calledC{}; // called constructor list
};




#endif //LEARNINGCPP_CONSTRUCTOR_H
