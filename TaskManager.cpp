//
// Created by Alex Hewitt on 4/2/25.
//
#include <iostream>
#include "TaskManager.h"
#include "Enums.h"


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

void TaskManager::mark_complete(Task t)
{
    t.set_status(Status::completed);
}

void TaskManager::remove_task(int id)
{
    for (int i {0}; i < all_tasks.size(); ++i)
    {
        if (all_tasks.at(i).get_id() == id)
        {
            all_tasks.erase();
        }
    }
}
