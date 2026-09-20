#include <iostream>

#include "sensor_processor.h"

int main()
{
    int sensor_value = 28;
    int threshold = 30;

    int difference = calculate_difference(sensor_value, threshold);

    std::cout << "Sensor value: " << sensor_value << std::endl;
    std::cout << "Threshold: " << threshold << std::endl;
    std::cout << "Difference: " << difference << std::endl;

    if (is_threshold_exceeded(sensor_value, threshold))
    {
        std::cout << "Warning: threshold exceeded!" << std::endl;
    }
    else
    {
        std::cout << "Status: normal" << std::endl;
    }

    return 0;
}