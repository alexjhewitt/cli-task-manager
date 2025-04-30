//
// Created by Alex Hewitt on 4/26/25.
//
#include "Task.h"
#include <ctime>


void Task::print_task_details() const
{
    std::cout << "===========================" << '\n';
    std::cout << "== ID: " << id_ << '\n';
    std::cout << "== Description: " << description_<< '\n';
    std::cout << "== Status: " << get_status_as_string(status_)<< '\n';
    std::cout << "== Priority: " << get_priority_as_string(priority_)<< '\n';
    std::cout << "== Created At: " << created_at_<< '\n';
    std::cout << "== Updated At: " << updated_at_<< '\n';
    std::cout << "===========================" << '\n';
}