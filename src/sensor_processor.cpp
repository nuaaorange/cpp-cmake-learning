#include "sensor_processor.h"

int calculate_difference(int sensor_value, int threshold)
{
    return sensor_value - threshold;
}

bool is_threshold_exceeded(int sensor_value, int threshold)
{
    return sensor_value > threshold;
}