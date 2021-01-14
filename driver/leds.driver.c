// light leds according to code
void light_leds(int code) {
  // only low 24 bits is valid
  $0xFFFFC60 = code;
  return;
}