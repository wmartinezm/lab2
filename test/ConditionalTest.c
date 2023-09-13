#include <stdio.h>
#include "uart_hello.h"

char *input_string = "Hello there.\n";
char *current_in;
char *output_string = "HELLO THERE.\n";
char *current_out;

void test_uart_out(uint8_t byte)
{
    TEST_ASSERT_EQUAL_CHAR(*current_out++, byte);
}

void test_uart_in(uint8_t *byte)
{
    *byte = *current_in;
    if(*current_in == '\n')
    {
        current_in = input_string;
    }
    else
    {
        current_in++;
    }
}

void setUp(void)
{
    current_in = input_string;
    current_out = output_string;
}

void tearDown(void) {}

void test_echo_upper(void)
{
    echo_uppercase_conditional((struct device *)0);
}

int main (void)
{
    UNITY_BEGIN();
    RUN_TEST(test_echo_upper);
    return UNITY_END();
}