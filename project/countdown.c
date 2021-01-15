#include "../driver/digits.driver.c"
#include "../driver/keyboard.driver.c"
#include "../util/minisys.util.c"

int main(void) {
  int countdown;
  int loop;
  countdown = 20;
  
  while (countdown >= 0) {
    loop = 12500;
    while (loop > 0) {
        loop = loop - 1;
        smart_display_digit(countdown);
    }
    countdown = countdown - 1;
  }
  
  return 0;
}