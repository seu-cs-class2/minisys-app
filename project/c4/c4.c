#include "../../driver/digits.driver.c"
#include "../../driver/leds.driver.c"

int main(void) {
  int loop;
  loop = 0;
  while (loop < 8) {
    display_digit(loop, 0);
  }
  return 0;
}