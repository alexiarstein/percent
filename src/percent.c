#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  if (argc != 3) {
    printf("Usage: %s <number1> <number2>\n", argv[0]);
    return 1;
  }

  char unit1 = argv[1][strlen(argv[1]) - 1];
  char unit2 = argv[2][strlen(argv[2]) - 1];

  double num1 = strtod(argv[1], NULL);
  double num2 = strtod(argv[2], NULL);
  double result;
  char unit;

  if (unit1 == 'B' || unit1 == 'b') {
    num1 *= 1;
  } else if (unit1 == 'K' || unit1 == 'k') {
    num1 *= 1024;
  } else if (unit1 == 'M' || unit1 == 'm') {
    num1 *= 1024 * 1024;
  } else if (unit1 == 'G' || unit1 == 'g') {
    num1 *= 1024 * 1024 * 1024;
  } else if (unit1 == 'T' || unit1 == 't') {
    num1 *= 1024 * 1024 * 1024 * 1024;
  } else {
    // Assigns a default size in bytes if no unit of measure is specified
    num1 *= 1;
  }
  if (unit2 == 'B' || unit2 == 'b') {
    num2 *= 1;
  } else if (unit2 == 'K' || unit2 == 'k') {
    num2 *= 1024;
  } else if (unit2 == 'M' || unit2 == 'm') {
    num2 *= 1024 * 1024;
} else if (unit2 == 'G' || unit2 == 'g') {
    num2 *= 1024 * 1024 * 1024;
  } else if (unit2 == 'T' || unit2 == 't') {
    num2 *= 1024 * 1024 * 1024 * 1024;
  } else {
    // Assigns a default size in bytes if no unit of measure is specified
    num2 *= 1;
  }

  result = (num1 / num2) * 100;

  if (unit1 == 'B' || unit1 == 'b') {
    printf("%.2f B is %.2f%% of ", num1, result);
  } else if (unit1 == 'K' || unit1 == 'k') {
    printf("%.2f K is %.2f%% of ", num1 / 1024, result);
  } else if (unit1 == 'M' || unit1 == 'm') {
    printf("%.2f M is %.2f%% of ", num1 / (1024 * 1024), result);
  } else if (unit1 == 'G' || unit1 == 'g') {
    printf("%.2f G is %.2f%% of ", num1 / (1024 * 1024 * 1024), result);
  } else if (unit1 == 'T' || unit1 == 't') {
    printf("%.2f T is %.2f%% of ", num1 / (1024 * 1024 * 1024 * 1024), result);
  } else {
    printf("%.2f is %.2f%% of ", num1, result);
  }
  if (unit2 == 'B' || unit2 == 'b') {
    printf("%.2f B\n", num2);
  } else if (unit2 == 'K' || unit2 == 'k') {
    printf("%.2f K\n", num2 / 1024);
  } else if (unit2 == 'M' || unit2 == 'm') {
    printf("%.2f M\n", num2 / (1024 * 1024));
  } else if (unit2 == 'G' || unit2 == 'g') {
    printf("%.2f G\n", num2 / (1024 * 1024 * 1024));
  } else if (unit2 == 'T' || unit2 == 't') {
    printf("%.2f T\n", num2 / (1024 * 1024 * 1024 * 1024));
  } else {
    printf("%.2f\n", num2);
  }

  return 0;
}

