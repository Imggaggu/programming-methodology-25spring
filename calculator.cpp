#include "calculator.h"
#include <stdexcept>

int Calculator::add(int a, int b) {
    // TODO
    return a + b;
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