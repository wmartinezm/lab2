#pragma once
#include <stdint.h>

#define TESTING_ENV

#ifdef TESTING_ENV
#include <stdio.h>
struct device {};
void test_uart_out(uint8_t byte);
void test_uart_in( uint8_t *byte);
#else
#include <drivers/uart.h>
#endif

void echo_uppercase(const struct device *dev);