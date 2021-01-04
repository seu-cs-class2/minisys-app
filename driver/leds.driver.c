// Leds Driver
// by z0gSh1u @ 2021
// Base Address: 0xFFFF_FC60
// Ports:
//   - Red Lights: FC60
//   - Yellow Lights: FC62
//   - Green Lights: FC64

// If you want to show 00001111,
// pass code = 2^0 + 2^1 + 2^2 + 2^3 = 15

void show_red_leds(int code) {
  $0xFFFFC60 = code;
  return;  
}

void show_yellow_leds(int code) {
  $0xFFFFC62 = code;
  return;  
}

void show_green_leds(int code) {
  $0xFFFFC64 = code;
  return;  
}
