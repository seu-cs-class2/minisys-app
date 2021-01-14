#include "../driver/digits.driver.c"
#include "../driver/keyboard.driver.c"
#include "../util/minisys.util.c"

int main(void) {
  int countdown;
  countdown = 20;
  
  while (countdown >= 0) {
    smart_display_digit(countdown);
    countdown = countdown - 1;
    delay(2);
  }
  
  return 0;
}