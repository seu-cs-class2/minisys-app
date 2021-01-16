#include "../driver/leds.driver.c"
#include "../util/minisys.util.c"
#include "../driver/keyboard.driver.c"

// all leds light up after 5 secs
int main(void) {
  int key;
  while (1) {
    light_leds(0);
    key = read_keyboard();
    if (key == 4) {
        __asm("syscall");
        delay(5);
        light_leds(0x000000F0);
    }
  }
  return 0;
}