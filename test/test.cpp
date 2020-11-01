#define CATCH_CONFIG_MAIN
#include <math.h>
#include "../src/calc.h"
#include "../thirdparty/single_include/catch2/catch.hpp"

TEST_CASE("plus") {
    double a_1 = 1; 
    double b_1 = 2;
    double result;
    double result_p;

    result_p = a_1 + b_1;

    result = plus(a_1, b_1);

    REQUIRE(result == result_p);

    double a_2 = 104; 
    double b_2 = 100000;

    result_p = a_2 + b_2;
    result = plus(a_2, b_2);

    REQUIRE(result == result_p);

    double a_3 = 104.2; 
    double b_3 = 100.02321;

    result_p = a_3 + b_3;
    result = plus(a_3, b_3);

    REQUIRE(result == result_p);

}

TEST_CASE("minus") {
    double a_1 = 132.3; 
    double b_1 = 20.4;
    double result1;
    double result_m;

    result_m = a_1 - b_1;

    result1 = minus(a_1, b_1);

    REQUIRE(result1 == result_m);

    double a_2 = 104; 
    double b_2 = 10;

    result_m = a_2 - b_2;
    result1 = minus(a_2, b_2);

    REQUIRE(result1 == result_m);

    double a_3 = 104001.2457; 
    double b_3 = 100.02321;

    result_m = a_3 - b_3;
    result1 = minus(a_3, b_3);

    REQUIRE(result1 == result_m);

}

TEST_CASE("multiplication") {
    double a_1 = 132.3; 
    double b_1 = 20.4;
    double result2;
    double result_mult;

    result_mult = a_1 * b_1;

    result2 = multiplication(a_1, b_1);

    REQUIRE(result2 == result_mult);

    double a_2 = 104; 
    double b_2 = 10;

    result_mult = a_2 * b_2;
    result2 = multiplication(a_2, b_2);

    REQUIRE(result2 == result_mult);

    double a_3 = 104001.2457; 
    double b_3 = 100.02321;

    result_mult = a_3 * b_3;
    result2 = multiplication(a_3, b_3);

    REQUIRE(result2 == result_mult);

}

TEST_CASE("division") {
    double a_1 = 132.3; 
    double b_1 = 20.4;
    double result2;
    double result_d;

    result_d = a_1 / b_1;

    result2 = division(a_1, b_1);

    REQUIRE(result2 == result_d);

    double a_2 = 1000000; 
    double b_2 = 10;

    result_d = a_2 / b_2;
    result2 = division(a_2, b_2);

    REQUIRE(result2 == result_d);

    double a_3 = 0.5; 
    double b_3 = 0.0004;

    result_d = a_3 / b_3;
    result2 = division(a_3, b_3);

    REQUIRE(result2 == result_d);

}

TEST_CASE("Pow") {
    double a_1 = 2; 
    double b_1 = 12;
    double result2;
    double result_pow;

    result2 = pow(a_1, b_1);

    result_pow = function_pow(a_1, b_1);

    REQUIRE(result2 == result_pow);

    double a_2 = 3; 
    double b_2 = 10;

  
    result2 = pow(a_2, b_2);
    result_pow = function_pow(a_2, b_2);

    REQUIRE(result2 == result_pow);

    double a_3 = 12; 
    double b_3 = 12;

    result2 = pow(a_3, b_3);
    result_pow = function_pow(a_3, b_3);

    REQUIRE(result2 == result_pow);

}

