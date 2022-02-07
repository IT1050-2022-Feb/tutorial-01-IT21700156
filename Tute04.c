/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>
int minimum(int p, int q);
int maximum(int r, int s);
int multiply(int t, int u);

int main() {
   int no1, no2;
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   printf("Minimum is %d ", minimum(no1, no2));
   printf("\nMaximum is %d ", maximum(no1, no2));
   printf("\nMultiply is %d ", multiply(no1, no2));
   return 0;
}

int minimum(int p, int q){
  if(p > q){
    return q;
  }
  else{
    return p;
  }
}
int maximum(int r, int s){
  if(r < s){
    return s;
  }
  else{
    return r;
  }
}
int multiply(int t, int u){
  return t * u;
}
