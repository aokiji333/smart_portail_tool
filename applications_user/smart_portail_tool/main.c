#include <furi.h>
#include <furi_hal.h>

int32_t smart_portail_tool_app(void* p) {
    UNUSED(p);
    furi_hal_gpio_write(&gpio_led_red, true);
    furi_delay_ms(1000);
    furi_hal_gpio_write(&gpio_led_red, false);
    return 0;
}
