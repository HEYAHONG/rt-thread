/*
 * Copyright (c) 2006-2021, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2019-03-08     obito0       first version
 */

#include <rtthread.h>
#include <rtdevice.h>
#include <board.h>

#ifndef RT_USING_NANO
/* defined the LED0 pin: PC13 */
#define LED0_PIN    GET_PIN(C, 13)

int main(void)
{
    /* set LED0 pin mode to output */
    rt_pin_mode(LED0_PIN, PIN_MODE_OUTPUT);

    while (1)
    {
        rt_pin_write(LED0_PIN, PIN_HIGH);
        rt_thread_mdelay(500);
        rt_pin_write(LED0_PIN, PIN_LOW);
        rt_thread_mdelay(500);
    }
}
#else
int main(void)
{
    while (1)
    {
        rt_thread_mdelay(500);
    }
}
#endif
