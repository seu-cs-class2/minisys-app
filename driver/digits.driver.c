// display num at loc (0 based)
void display_digit(int loc, int num) {
  // max-min clip
  if (num < 0) num = 0;
  if (num > 15) num = 15;
  if (loc < 0) loc = 0;
  if (loc > 7) loc = 7;
  // deliver data
  $0xFFFFFC00 = num;
  $0xFFFFFC04 = loc;
  return;
}

// display value as decimal at 7seg
void smart_display_digit(int value) {
  int current_loc;
  int data;
  int remainder;
  current_loc = 0;
  data = value;
  while (data >= 0) {
    remainder = data % 10;
    data = data / 10;
    display_digit(current_loc, remainder);
    current_loc = current_loc + 1;
  }
  return;
}