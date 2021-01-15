// delay 0.5 * halfsec secs
void delay(int halfsec) {
  halfsec = halfsec * 250000;
  while (halfsec > 0) {
    halfsec = halfsec - 1;
  }
  return;
}