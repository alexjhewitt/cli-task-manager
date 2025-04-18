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
};

#endif //TASK_H
