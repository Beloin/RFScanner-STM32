#include "main.h"

void app_main()
{
    while (1)
    {
        HAL_GPIO_TogglePin(GPIOC, GPIO_PIN_13);
        HAL_GPIO_TogglePin(GPIOC, GPIO_PIN_15);
        HAL_Delay(500);
    }
}
