// Watchdog Driver
// by z0gSh1u @ 2021
// Base Address: 0xFFFF_FC50
// Ports:
//   - Itself: FC50

// access watchdog once
void touch_watchdog() {
  $0xFFFFFC50 = 1;
  return;
}
