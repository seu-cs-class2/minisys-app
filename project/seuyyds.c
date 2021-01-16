#include "../driver/digits.driver.c"
#include "../driver/keyboard.driver.c"
#include "../driver/leds.driver.c"
#include "../driver/switch.driver.c"
#include "../util/minisys.util.c"

int status;

int main(void) {
    int switch_val;
    int delayer;
    int keyboard_val;
    int count_val;
    int beep_val;
    int beep_max;

    beep_max = 500; // freq
    beep_val = beep_max;
    status = 0;
    count_val = 10; // init
    clear_keyboard();

    while (1) {
        delayer = 20000;
        switch_val = read_switch();
        keyboard_val = read_keyboard();
        clear_keyboard();
        if (keyboard_val == 14) {
            // is E (*), sync to 7seg
            count_val = switch_val;
            status = 1;
        }
        if (keyboard_val == 15) {
            // is F (#), sync to leds
            count_val = switch_val;
            status = 2;
        }
        if (keyboard_val == 0) {
            // is 0 (0), start countdown
            status = 3;
        }
        if (status == 1) {
            smart_display_digit(count_val);
        }
        if (status == 2) {
            light_leds(count_val);
        }
        if (status == 3) { // counting down, update display
            while (delayer >= 0) {
                delayer = delayer - 1;
                smart_display_digit(count_val);
                light_leds(count_val);
            }
            count_val = count_val - 1;
        }
        if (count_val <= 0) {
            status = 1;
            while (1) {
                beep_val = beep_val - 1;
                if (beep_val >= beep_max / 2) {
                    $0xFFFFFD10 = 1;
                    continue;
                }
                $0xFFFFFD10 = 0;
                if (beep_val <= 0) {
                    beep_val = beep_max;
                }
                display_digit(0, 5); // S
                clear_digits();
                display_digit(1, 13); // D
                clear_digits();
                display_digit(2, 17); // Y
                clear_digits();
                display_digit(3, 17); // Y
                clear_digits();
                // SPACE
                display_digit(5, 16); // U
                clear_digits();
                display_digit(6, 14); // E
                clear_digits();
                display_digit(7, 5); // S
                clear_digits();
            }
        }
    }
    return 0;
}