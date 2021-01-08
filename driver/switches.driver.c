// Switches Driver
// by z0gSh1u @ 2021
// Base Address: 0xFFFF_FC70
// Ports:
//   - Itself: FC70, low 24 bit valid

// get switches input
int get_switches_input(void) {
  int result;
  result = $0xFFFFFC70;
  return result;
}
