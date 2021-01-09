// deliver data of switches directly to leds.

#include "../../driver/switches.driver.c"
#include "../../driver/leds.driver.c"
#include "../../util/minisys.util.c"

int main(void) {
  int switches;
  int reds;
  int yellows;
  int greens;
  while (1) {
    switches = get_switches_input();
    reds = switches >> 16;
    yellows = (switches >> 8) & 0x000000ff;
    greens = switches & 0x000000ff;
    show_red_leds(reds);
    show_yellow_leds(yellows);
    show_green_leds(greens);
    delay(100);
  }
  return 0;
}