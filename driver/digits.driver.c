// Digits Display Driver
// by z0gSh1u @ 2021
// Base Address: 0xFFFF_FC00
// Ports:
//   - Location Register: FC00
//   - Data Register: FC02

// display num at loc
void display_digit(int loc, int num) {
  // max-min clip
  if (num < 0) num = 0;
  if (num > 15) num = 15;
  if (loc < 0) loc = 0;
  if (loc > 7) loc = 7;
  // deliver data
  $0xFFFFFC00 = loc;
  $0xFFFFFC02 = num;
  return;
}
