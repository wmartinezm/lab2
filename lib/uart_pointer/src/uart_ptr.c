#pragma once
#include "uart_ptr.h"

void echo_uppercase_ptr(const struct device *dev,
                        int (*uart_rx)(const struct device *, unsigned char *),
                        void (*uart_tx)(const struct device *, unsigned char))
{
    char byte, up;
    do {
        if (uart_rx(dev, &byte) != 0) {
            continue;
        }
        if (byte <= 'z' && byte >= 'a')
            up = byte - 'a' + 'A';
        else
            up = byte;
        uart_tx(dev, up);
    } while(byte != '\n');
}