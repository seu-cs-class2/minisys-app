#include "../driver/leds.driver.c"
#include "../util/minisys.util.c"

// display leds 4 by 4
int main(void) {
  while (1) {
    light_leds(0x0000000F);
    delay(2);
    light_leds(0x000000F0);
    delay(2);
    light_leds(0x00000F00);
    delay(2);
  }
  return 0;
}