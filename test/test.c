#include "../src/calc.h"
#define GREEN "\x1B[32m"
#define KNRM "\x1B[0m"

void test_plus() {
    double test_a = 1;
    double test_b = 2;
    double result_test = 0;

    result_test = test_a + test_b;

    if(result_test == plus(test_a, test_b)) {
        printf("%s OK %s\n", GREEN, KNRM);
    } else {
        puts("Failure");
    }
}

void test_minus() {
    double test_a = 12.5;
    double test_b = 2.75;
    double result_test = 0;

    result_test = test_a - test_b;

    if(result_test == minus(test_a, test_b)) {
        printf("%s OK %s\n", GREEN, KNRM);
    } else {
        puts("Failure");
    }
}

void test_multiplication() {
    double test_a = 12;
    double test_b = 47;
    double result_test = 0;

    result_test = test_a * test_b;

    if(result_test == multiplication(test_a, test_b)) {
        printf("%s OK %s\n", GREEN, KNRM);
    } else {
        puts("Failure");
    }
}

void test_division() {
    double test_a = 1200;
    double test_b = 45;
    double result_test = 0;

    result_test = test_a / test_b;

    if(result_test == division(test_a, test_b)) {
        printf("%s OK %s\n", GREEN, KNRM);
    } else {
        puts("Failure");
    }
}

void test_function_pow() {
    double test_a = 2;
    double test_b = 45;
    double result_test = 0;

    result_test = test_a / test_b;

    if(result_test == division(test_a, test_b)) {
        printf("%s OK %s\n", GREEN, KNRM);
    } else {
        puts("Failure");
    }
}

void test_plus1() {
    double test_a = 1235.45;
    double test_b = 214.36;
    double result_test = 0;

    result_test = test_a + test_b;

    if(result_test == plus(test_a, test_b)) {
        printf("%s OK %s\n", GREEN, KNRM);
    } else {
        puts("Failure");
    }
}

void test_minus1() {
    double test_a = 1221.512;
    double test_b = 221.752;
    double result_test = 0;

    result_test = test_a - test_b;

    if(result_test == minus(test_a, test_b)) {
        printf("%s OK %s\n", GREEN, KNRM);
    } else {
        puts("Failure");
    }
}

void test_multiplication1() {
    double test_a = 1212;
    double test_b = 471;
    double result_test = 0;

    result_test = test_a * test_b;

    if(result_test == multiplication(test_a, test_b)) {
        printf("%s OK %s\n", GREEN, KNRM);
    } else {
        puts("Failure");
    }
}

void test_division1() {
    double test_a = 12000000;
    double test_b = 450;
    double result_test = 0;

    result_test = test_a / test_b;

    if(result_test == division(test_a, test_b)) {
        printf("%s OK %s\n", GREEN, KNRM);
    } else {
        puts("Failure");
    }
}

void test_function_pow1() {
    double test_a = 3;
    double test_b = 23;
    double result_test = 0;

    result_test = test_a / test_b;

    if(result_test == division(test_a, test_b)) {
        printf("%s OK %s\n", GREEN, KNRM);
    } else {
        puts("Failure");
    }
}

int main () {
    test_plus();
    test_minus();
    test_multiplication();
    test_function_pow();
    test_division();

    test_plus1();
    test_minus1();
    test_multiplication1();
    test_function_pow1();
    test_division1();
}

