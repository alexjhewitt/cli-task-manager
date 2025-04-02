//
// Created by Alex Hewitt on 3/30/25.
//

#ifndef TASK_H
#define TASK_H

#include <string>
#include "Enums.h"

class Task {
public:
    Task(int id, const std::string& description, Priority p, Status s): id(id), description(description), priority(p), status(s){};
    void get_id();
    void print_task_details();

private:
    int id;
    std::string description;
    Priority priority;
    Status status;

    int set_id();
};


#endif //TASK_H
