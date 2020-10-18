#include "calc.h"

double plus(double a, double b) {
  return a + b;
}

double minus(double a, double b) {
  return a - b;
}

double multiplication(double a, double b) {
  return a * b;
}

double division(double a, double b) {
  return a / b;
}

double function_pow(double a, int b) {
  double result = 1;
  if (b == 0) {
    result = 1;
    return result;
  }

  for (int i = 0; i < b; i++) {
    result = a * result;
  }
  return result;
}
