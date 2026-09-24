#pragma once

int calculate_difference(int sensor_value, int threshold);

bool is_threshold_exceeded(int sensor_value, int threshold);

void try_modify_value(int sensor_value);

void modify_by_reference(int& sensor_value);

void print_by_const_reference(const int& sensor_value);