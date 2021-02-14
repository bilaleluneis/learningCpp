/**
 * @author: Bilal El Uneis
 * @email:  bilaleluneis@gmail.com
 * @since   Feb 2021
 */

#ifndef LEARNINGCPP_PAIR_HPP
#define LEARNINGCPP_PAIR_HPP

template<typename A, typename B>
struct pair {

        pair(A, B);
        pair() = delete;

        A a;
        B b;
};

template<typename A, typename B> pair(A a, B b) -> pair<A, B>;

template<typename A, typename B>
pair<A, B>::pair(A a, B b) {
    this->a = a;
    this->b = b;
}

#endif //LEARNINGCPP_PAIR_HPP
