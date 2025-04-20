#include <furi.h> 
#include <furi_hal.h>

int32_t smart_portail_tool(void* p) {
    UNUSED(p);
    furi_hal_gpio_write(&gpio_led_red, true);
    furi_delay_ms(1000);
    furi_hal_gpio_write(&gpio_led_red, false);
    return 0;
}

const App smart_portail_tool_app = {
    .app = smart_portail_tool,
};

