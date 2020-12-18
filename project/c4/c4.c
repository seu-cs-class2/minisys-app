// digits 0xfffffc00
// keyboard 0xfffffc10
// timer 0xfffffc20
// led 0xfffffc60
// speaker 0xfffffd10
 
void init(void) {
  // init CNT0
  $0xfffffc20 = 0;
  $0xfffffc24 = 30; // 30 secs
}

void display(int number) {
  // ?
}

int main(void) {
  while (1) {
    // ?
  }
}