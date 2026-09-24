#include <iostream>

#include "sensor_processor.h"

int main()
{
    int sensor_value = 28;
    int threshold = 30;

    std::cout << "Main value before function call: "
              << sensor_value << std::endl;

    std::cout << "Main variable address: "
              << &sensor_value << std::endl;

    try_modify_value(sensor_value);

    std::cout << "Main value after value function: "
              << sensor_value << std::endl;

    std::cout << std::endl;

    std::cout << "Before reference modification: "
              << sensor_value << std::endl;

    modify_by_reference(sensor_value);

    std::cout << "After reference modification: "
              << sensor_value << std::endl;

    print_by_const_reference(sensor_value);

    std::cout << std::endl;

    int difference = calculate_difference(sensor_value, threshold);

    std::cout << "Sensor value: "
              << sensor_value << std::endl;

    std::cout << "Threshold: "
              << threshold << std::endl;

    std::cout << "Difference: "
              << difference << std::endl;

    if (is_threshold_exceeded(sensor_value, threshold))
    {
        std::cout << "Warning: threshold exceeded!"
                  << std::endl;
    }
    else
    {
        std::cout << "Status: normal"
                  << std::endl;
    }

    return 0;
}