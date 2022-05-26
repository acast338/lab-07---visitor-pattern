#ifndef __OP_HPP__
#define __OP_HPP__
using namespace std;

#include "base.hpp"
#include <string>

class Op : public Base {
  private:
    double val;
    string str;
  public:
    Op(double value) : Base() {
        this->val = value;
        this->str = to_string(val);
        this->str.erase(str.find_last_not_of('0')+2, string::npos);
    }

    virtual double evaluate() {
        return val;
    }

    virtual std::string stringify() {
        return str;
    }

    virtual int number_of_children() {
        return 0;
    }

    virtual Base* get_child(int i) {
        return nullptr;
    }
};
#endif
