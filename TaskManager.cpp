//
// Created by Alex Hewitt on 4/26/25.
//

#include "TaskManager.h"
void TaskManager::add_task(Task t)
{
    tasks_.push_back(t);
}

void TaskManager::list_tasks()
{
    for (const Task& task: tasks_)
    {
        task.print_task_details();
    }
}
