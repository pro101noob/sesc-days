#include<stdio.h>
#include<math.h>

int main() {
  int k = 0;
  scanf("%d", &k);
  printf("years: %.d\n", k/365);
  printf("weeks: %.d\n", k%365/7);
  printf("days: %.d\n", k%365%7);
  return 0;
}