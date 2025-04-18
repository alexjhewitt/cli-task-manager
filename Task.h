//
// Created by Alex Hewitt on 3/30/25.
//

#ifndef TASK_H
#define TASK_H

#include <string>
#include "Enums.h"

struct Task
{
    int id;
    std::string description;
    Priority priority;
    Status status;
    std::string created_at;
    std::string updated_at;
};

#endif //TASK_H
