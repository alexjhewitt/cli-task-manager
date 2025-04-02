//
// Created by Alex Hewitt on 3/30/25.
//
#include <iostream>
#include "Task.h"
#include "Enums.h"

void Task::print_task_details() {
    std::cout << "======" << '\n';
    std::cout << "== ID: " << id << '\n';
    std::cout << "== Description: " << description << '\n';
    std::cout << "== Priority: " << get_priority_as_string(priority) << '\n';
    std::cout << "== Status: " << get_status_as_string(status) << " \n";
    std::cout << "======" << '\n';
}
