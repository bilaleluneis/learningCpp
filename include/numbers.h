/**
 * @author: Bilal El Uneis
 * @email: bilaleluneis@gmail.com
 * @since July 25 2020
 */

#ifndef LEARNINGCPP_NUMBERS_H
#define LEARNINGCPP_NUMBERS_H

#include <type_traits>

namespace runtime {

    template<typename T> class Number {

        public:
            virtual ~Number() = default;
            [[nodiscard]] T value() const;
            virtual Number* operator+(const Number&) const = 0;

        protected:
            T internal_value{};

    };


    class Integer : public Number<int> {

        public:
            ~Integer() override = default;

            explicit Integer(const int &v) { Number::internal_value = v; }

            Integer* operator+(const Number&) const override;

    };

    class Float : public Number<float> {

        public:
            ~Float() override = default;

            explicit Float(const float &v) { Number::internal_value = v; }

            Float* operator+(const Number&) const override;

    };

}

namespace compiletime {

    template<typename NumberSubType> class Number {

        public:

        protected:
            Number() = default;

        private:
            //static_assert(std::is_same_v<NumberSubType, Number>);
    };

    class Integer : public Number<Integer> {
        public:
            Integer() = default;

    };
}


#endif //LEARNINGCPP_NUMBERS_H
