int read_keyboard(void) {
  // assume syscall 1 is read keyboard
  __asm("ori $v0, $zero, 1");
  __asm("syscall");
  // $v0 will be the result then
}