#include "../driver/digits.driver.c"
#include "../driver/keyboard.driver.c"

// display keyboard value at location value div 4
int main(void) {
  int a;
  int loc;
  while (1) {
    a = read_keyboard();
    loc = a / 4;
    display_digit(loc, a);
  }
  return 0;
}