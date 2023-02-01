#include <stdio.h>

int main(void) {
  int num, sum = 0;
  printf("Enter the number: ");
  scanf("%d", &num);
  printf("\n");
  for (int i = 1; i <= num; i++) {
    sum += i;
  }
  printf("%d\n", sum);
  printf("\n");

  for(int i = num; i >= 1; i--) {
    printf("%d\n", i);
  }
  return 0;
}