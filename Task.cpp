//
// Created by Alex Hewitt on 3/30/25.
//
#include <iostream>
#include "Task.h"
#include "Enums.h"

void Task::print_task_details() {
    std::cout << "======" << '\n';
    std::cout << "== ID: " << task_id << '\n';
    std::cout << "== Description: " << task_description << '\n';
    std::cout << "== Priority: " << get_priority_as_string(task_priority) << '\n';
    std::cout << "== Status: " << get_status_as_string(task_status) << " \n";
    std::cout << "======" << '\n';
}
// ====== Getters =====
int Task::get_id()
{
    return task_id;
}
std::string Task::get_description()
{
    return task_description;
}
std::string Task::get_priority()
{
    return get_priority_as_string(task_priority);
}
std::string Task::get_status()
{
    return get_status_as_string(task_status);
}

// =========== Setters =========
void Task::set_id(const int id)
{
    task_id = id;
}
void Task::set_description(std::string description)
{
    task_description = description;
}
void Task::set_priority(Priority p)
{
    task_priority = p;
}
void Task::set_status(Status s)
{
    task_status = s;
}
