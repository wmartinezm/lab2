#pragma once
#include <stdint.h>

#ifndef TESTING_ENV
    #include <drivers/uart.h>
#else
    struct device {};
    void test_uart_out(uint8_t byte);
    void test_uart_in( uint8_t *byte);
#endif

void echo_uppercase(const struct device *dev);