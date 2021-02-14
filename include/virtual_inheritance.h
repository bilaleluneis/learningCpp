/**
 * @author: Bilal El Uneis
 * @email: bilaleluneis@gmail.com
 * @since Jan 18 2021
 */

#ifndef LEARNINGCPP_VIRTUAL_INHERITANCE_H
#define LEARNINGCPP_VIRTUAL_INHERITANCE_H

class A {
    protected:
        A()=default;
    public:
        int data[10];
};

class B: public virtual A{};

class C: public virtual A{};



#endif //LEARNINGCPP_VIRTUAL_INHERITANCE_H
