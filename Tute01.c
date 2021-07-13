/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark1, mark2;

  //get marks
  printf("Insert mark 1: ");
  scanf("%d", &mark1);
  printf("Insert mark 2: ");
  scanf("%d", &mark2);

  //output results
  printf("Average of two given marks: %.2f", (mark1 + mark2) / 2.0);

  return 0;
}

