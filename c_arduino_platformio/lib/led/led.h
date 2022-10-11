#ifndef LED_H
#define LED_H

#include <stdint.h>

typedef enum {
    LED_0,
    LED_1,
    LED_2,
    LED_3
} led_id_t;

void set_led_on(led_id_t id);
void set_led_off(led_id_t id);

#endif // LED_H
