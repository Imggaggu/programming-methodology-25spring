#include "calculator.h"
#include <stdexcept>
#include <limits>

int Calculator::add(int a, int b) {
    // TODO
    int max = std::numeric_limits<int>::max();
    if ((b > 0) && (a > max - b)){
        throw std::overflow_error ("input Overflow");
    } 
    return a+b;
}

int Calculator::sub(int a, int b) {
    // TODO
    return a - b;
}

int Calculator::mul(int a, int b) {
    // TODO
    return a * b ;
}

int Calculator::div(int a, int b) {
    // TODO
    if ( b==0 ){
        throw std::invalid_argument("Zero Division Error");
    }
    return a / b;
}