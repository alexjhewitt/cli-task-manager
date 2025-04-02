//
// Created by Alex Hewitt on 4/2/25.
//

#ifndef TASKMANAGER_H
#define TASKMANAGER_H
#include <vector>
#include "Task.h"
#include "Enums.h"

class TaskManager {
public:
    void add_task(int id, std::string description, Priority p, Status s);
    void list_tasks();
    void remove_task(int id);
    void mark_complete(Task t);
private:
    std::vector<Task> all_tasks;
};



#endif //TASKMANAGER_H
