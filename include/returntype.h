/**
 * @author: Bilal El Uneis
 * @email: bilaleluneis@gmail.com
 * @since Aug 03 2020
 */

#ifndef LEARNINGCPP_RETURNTYPE_H
#define LEARNINGCPP_RETURNTYPE_H

template <typename T>
struct constPtrVal {
        const T* val;
        bool success;
};

template <typename T>
struct valRef {
        T& val;
        bool success;
};

template <typename T>
struct val {
        T val;
        bool success;
};

using instace_id = int;

#endif //LEARNINGCPP_RETURNTYPE_H
