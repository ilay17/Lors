#include "calc.h"

int main() {
  int step = 0;
  double a = 0;
  double b = 0;
  double result = 0;

  while (step != 0x1B) {
    puts("1) Addition");
    puts("2) Subtraction");
    puts("Selected action:");
    scanf("%d", &step);

    if (step < 0 || step > 5) {
      exit(1);
    }

    if (step > 0 || step < 5) {
      switch (step) {
      case 1:
        puts("Input a and b");
        scanf("%lf %lf", &a, &b);
        result = plus(a, b);
        printf("%4.4lf\n", result);
        break;

      case 2:
        puts("Input a and b");
        scanf("%lf %lf", &a, &b);
        result = minus(a, b);
        printf("%4.4lf\n", result);
        break;

      }
    }
  }
  return 0;
}

