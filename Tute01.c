/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  float mark1 ,mark2;
  float avg;
  printf("Enter the mark 1: ");//print mark1
  scanf("%f", &mark1);
  printf("Enter the mark 2: ");//print mark2
  scanf("%f", &mark2);
  
  avg = (mark1 + mark2)/2.0;//Calculations

  printf("average is %.2f", avg);
  
  return 0;//end main function
}

