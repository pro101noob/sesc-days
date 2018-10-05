#include<stdio.h>
#include<math.h>

int main() {
  int k;
  scanf("%d", &k);
  printf("years:", "%.d", k/365);
  printf("weeks:", "%.d", k%365/7);
  printf("days:", "%.d", k%365%7);
  return 0;
}