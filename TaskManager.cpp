//
// Created by Alex Hewitt on 4/2/25.
//
#include <iostream>
#include "TaskManager.h"


void TaskManager::add_task(int id, std::string description, Priority p, Status s)
{
    const auto new_task = Task(id, description, p, s);
    all_tasks.push_back(new_task);
}

void TaskManager::list_tasks()
{
    for (auto task: all_tasks)
    {
        task.print_task_details();
    }
}

void TaskManager::mark_complete()
{

}

void TaskManager::remove_task()
{

}
