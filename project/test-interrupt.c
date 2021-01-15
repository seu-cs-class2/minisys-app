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
        light_leds(0xFFFFFFFF);
        __asm("syscall");
        delay(10);
    }
  }
  return 0;
}