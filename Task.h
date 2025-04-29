//
// Created by Alex Hewitt on 4/26/25.
//

#ifndef TASK_H
#define TASK_H
#include <iostream>
#include <string_view>
#include <utility>
#include "Enums.h"


class Task
{
public:
    explicit Task(const int id=-1, std::string_view description="No description", Status status = Status::backlog, Priority priority = Priority::low,
                  std::string created_at="no creation date found", std::string updated_at="no creation date found") :
    id_{id},
    description_{description},
    status_{status},
    priority_{priority},
    created_at_{std::move(created_at)},
    updated_at_{std::move(updated_at)}
    {
        std::cout << "Task created" << '\n';
    }
    std::string get_current_time();
    void print_task_details() const;
private:
    int id_ {0};
    std::string description_;
    Status status_;
    Priority priority_;
    std::string created_at_;
    std::string updated_at_;
};



#endif //TASK_H
