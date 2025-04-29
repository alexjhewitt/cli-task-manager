//
// Created by Alex Hewitt on 4/26/25.
//

#include "TaskManager.h"
void TaskManager::add_task(std::vector<std::string>& command_list)
{
    std::string description {};
    for (int i {1}; i < command_list.size(); ++i)
    {
        if (i == command_list.size()-1)
        {

            description += command_list.at(i);
        }
        description += command_list.at(i) + " ";
    }
    Task new_task {}
    tasks_.push_back(t);
}

void TaskManager::list_tasks()
{
    for (const Task& task: tasks_)
    {
        task.print_task_details();
    }
}
