#include "sensor_processor.h"

#include <iostream>

int calculate_difference(int sensor_value, int threshold)
{
    return sensor_value - threshold;
}

bool is_threshold_exceeded(int sensor_value, int threshold)
{
    return sensor_value > threshold;
}

void try_modify_value(int sensor_value)
{
    std::cout << "Function value before modification: "
              << sensor_value << std::endl;

    std::cout << "Function variable address: "
              << &sensor_value << std::endl;

    sensor_value = 100;

    std::cout << "Function value after modification: "
              << sensor_value << std::endl;
}

void modify_by_reference(int& sensor_value)
{
    std::cout << "Reference address: "
              << &sensor_value << std::endl;

    sensor_value = 100;
}

void print_by_const_reference(const int& sensor_value)
{
    std::cout << "Const reference value: "
              << sensor_value << std::endl;

    std::cout << "Const reference address: "
              << &sensor_value << std::endl;
}