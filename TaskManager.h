//
// Created by Alex Hewitt on 4/26/25.
//

#ifndef TASKMANAGER_H
#define TASKMANAGER_H

#include <vector>
#include "Task.h"


class TaskManager {
public:
    void add_task(std::vector<std::string>& command_list);
    void list_tasks();
private:
    std::vector<Task> tasks_ {};
};



#endif //TASKMANAGER_H
