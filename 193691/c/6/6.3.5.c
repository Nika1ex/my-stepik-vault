#include <stdio.h>

int get_max(int a, int b);
int get_min(int a, int b);

int main(void) {
  int a, b, t;
  scanf("%d, %d, %d", &a, &b, &t);
  if (t == 1)
    printf("%d", get_max(a, b));
  else
    printf("%d", get_min(a, b));
  return 0;
}

int get_max(int a, int b) { return a > b ? a : b; }

int get_min(int a, int b) { return a < b ? a : b; }