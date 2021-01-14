#include "../driver/digits.driver.c"
#include "../driver/keyboard.driver.c"

int multiply(int a, int b) {
  return a * b;
}

// display keyboard multiply 2 at 7seg
int main(void) {
  int key;
  int key2;
  while (1) {
    key = read_keyboard();
    key2 = multiply(key, 2);
    smart_display_digit(key2);
  }
  return 0;
}
