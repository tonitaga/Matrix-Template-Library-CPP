#ifndef MATRIX_TEMPLATE_LIBRARY_CPP_MATRIX_CONFIG_H_
#define MATRIX_TEMPLATE_LIBRARY_CPP_MATRIX_CONFIG_H_

#include <iostream>

#ifndef MATRIX_CXX17_CONSTEXPR
    #if __cplusplus >= 201703L
    #define MATRIX_CXX17_CONSTEXPR constexpr
    #else
    #define MATRIX_CXX17_CONSTEXPR
    #endif
#endif

#endif //MATRIX_TEMPLATE_LIBRARY_CPP_MATRIX_CONFIG_H_
