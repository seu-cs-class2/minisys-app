#include "../driver/digits.driver.c"
#include "../driver/keyboard.driver.c"
#include "../driver/leds.driver.c"
#include "../driver/switch.driver.c"
#include "../util/minisys.util.c"

int switch_val;

int main(void) {
    int delayer;
    int count_val;
    
    count_val = 5;
        
    while (count_val >= 0) {
        delayer = 12000;
        while (delayer > 0) {
            delayer = delayer - 1;
            smart_display_digit(count_val);
        }
        count_val = count_val - 1;
        light_leds(0x00000F00);
        if (count_val <= 0) {
            break;
        }
    }
    
    light_leds(0x000000F0);
    while (1) {
        light_leds(0x0000000F);
        switch_val = read_switch();
        smart_display_digit(switch_val);
    }

    return 0;
}