#include "../driver/leds.driver.c"
#include "../util/minisys.util.c"

// all leds light up after 5 secs
int main(void) {
  light_leds(0);
  delay(10);
  __asm("syscall");
  return 0;
}