//
// Created by Alex Hewitt on 3/30/25.
//

#ifndef TASK_H
#define TASK_H

#include <string>
#include "Enums.h"

class Task {
public:
    Task(int id, const std::string& description, Priority p, Status s): task_id(id), task_description(description), task_priority(p), task_status(s){};
    int get_id();
    std::string get_description();
    std::string get_priority();
    std::string get_status();

    void set_id(int id);
    void set_description(std::string description);
    void set_priority(Priority p);
    void set_status(Status s);
    void print_task_details();

private:
    int task_id;
    std::string task_description;
    Priority task_priority;
    Status task_status;
};


#endif //TASK_H
