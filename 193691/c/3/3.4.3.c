#include <stdio.h>

int main(void) {
  char menu_item;
  short menu_number = 0;
  if (scanf("%c", &menu_item) != 1) {
    printf("Input error.");
    return 0;
  }
  switch (menu_item) {
    case 'a':
    case 'A':
      menu_number = 1;
      break;
    case 'b':
    case 'B':
      menu_number = 2;
      break;
    case 'c':
    case 'C':
      menu_number = 3;
      break;
    case 'd':
    case 'D':
      menu_number = 4;
      break;
    default:
      menu_number = -1;
      break;
  }
  printf(
      "a) learning english\n\
b) learning C/C++\n\
c) learning mathematic\n\
d) learning Python\n");
  printf("%hd", menu_number);
  __ASSERT_TESTS__
  return 0;
}