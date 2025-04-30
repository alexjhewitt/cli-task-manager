//
// Created by alexhewitt on 4/30/25.
//
#include <string>
#include <ctime>
#include <iostream>

std::string get_current_time()
{
    std::time_t t {std::time(nullptr)};
    char time[100];
    std::strftime(time, sizeof(time), "%m.%d.%Y  %T", std::localtime(&t));
    return time;
}
