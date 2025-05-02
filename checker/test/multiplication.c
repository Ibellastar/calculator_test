#include "unity.h"
#include "multiplier.h"

void setUp(void)
{
}

void tearDown(void)
{
}


void test_positive_numbers(void) {
    TEST_ASSERT_EQUAL_INT(6, multiplier(2, 3));
}