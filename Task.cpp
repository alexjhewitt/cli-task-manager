//
// Created by Alex Hewitt on 4/26/25.
//
#include "Task.h"

std::string Task::get_current_time()
{
    std::time_t t {std::time(nullptr)};
    char time[100];
    std::strftime(time, sizeof(time), "%m.%d.%Y  %T\n", std::localtime(&t));
    std::cout << time;
    return time;
}

void Task::print_task_details() const
{
    std::cout << "ID: " << id_ << '\n';
}