// read 4x4 keyboard (query method)
int read_keyboard(void) {
  // key in 0 - F
  int key;
  key = $0xFFFFFC10;
  return key;
}